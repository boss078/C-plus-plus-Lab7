//---------------------------------------------------------------------------

#pragma hdrstop

#include "HashTable.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

//Простое заполнение массива элементами со значениями полей NULL
HashTable::HashTable()
{
	this->table = new Node*[TABLE_LENGTH];
	for (int i = 0; i < TABLE_LENGTH; i++) {
    this->table[i] = new Node();
	}
}

//Заполнение полей существующего "пустого" элемента массива,
//или, в случае одинакового хеширования, добавление нового
//элемента по тому же адресу в массиве
int HashTable::Add(int key, UnicodeString info)
{
  int hash = this->Hash(key);
  if (this->table[hash]->key == NULL) {
    this->table[hash]->key = key;
    this->table[hash]->info = info;
  }
  else {
    Node* node = new Node(key, info, NULL);
    Node* curr = this->table[hash];
    while (curr->next != NULL) {
      curr = curr->next;
    }
    curr->next = node;
  }
  return hash;
}

//Поиск элемента с нужным ключом в массиве путем перебора всех
//элементов массива, включая находящиеся по одному и тому же адресу
Node* HashTable::Find(int key)
{
  int hash = Hash(key);
  if (this->table[hash]->key == NULL) {
    return NULL;
  }
  else {
    Node* curr = this->table[hash];
    while (curr != NULL) {
      if (curr->key == key) {
        return curr;
      }
      curr = curr->next;
    }
    return NULL;
  }
}

//Удаление производится путем удаления ссылки на объект,
//если объект находится вместе с другим объектом на одном месте
//в массиве, или путем обнуления полей
bool HashTable::Delete(int key)
{
  int hash = Hash(key);
  if (this->table[hash]->key == NULL) {
    return false;
  }
  else {
    Node* curr = this->table[hash];
    if (curr->key == key) {
      if (curr->next != NULL) {
        this->table[hash] = curr->next;
        delete curr;
        return true;
      }
      this->table[hash]->key = NULL;
      this->table[hash]->info = NULL;
      return true;
    }
    while (curr->next != NULL) {
      if (curr->next->key == key) {
        if (curr->next->next != NULL) {
          Node* newOne = curr->next->next;
          delete curr->next;
          curr->next = newOne;
          return true;
        }
        delete curr->next;
        curr->next = NULL;
        return true;
      }
      curr = curr->next;
    }
    return false;
  }
}

//Сначала вычисляем среднее значение ключей, а затем
//в цикле подсчитываем количество элементов, которые
//не превышают это среднее значение
int HashTable::SolveTask()
{
	long long sum = 0;
  int amount = 0;
  for (int i = 0; i < TABLE_LENGTH; i++) {
		Node* curr = this->table[i];
		while (curr != NULL && curr->key != NULL)
    {
      sum += curr->key;
			amount++;
      curr = curr->next;
    }
  }
  int answ = 0;
  if (amount == 0) {
    return 0;
  }
	double mid = (double)(sum / amount);
	for (int i = 0; i < TABLE_LENGTH; i++) {
    Node* curr = this->table[i];
    while (curr != NULL && curr->key != NULL)
    {
      if (curr->key <= mid) {
        answ++;
      }
      curr = curr->next;
    }
  }
  return answ;
}

//Вычисления хеша путем сдвига квадрата ключа влево на 3 бита и
//возвращения остатка от деления на количество элементов в массиве
int HashTable::Hash(int key)
{
  key *= key;
  key <<= 3;
  return key % TABLE_LENGTH;
}
