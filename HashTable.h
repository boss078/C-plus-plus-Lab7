//---------------------------------------------------------------------------

#ifndef HashTableH
#define HashTableH
//---------------------------------------------------------------------------
#endif

#define TABLE_LENGTH 256
#include "Node.h"

//Экземпляр класса HashTable состоит из двумерного массива
//объектов класса Node, конструкторов, функций добавления,
//поиска по ключу, удаления по ключу, фунции хеширования и
//функции для решения индивидуального задания(12 вариант)

class HashTable
{
  public:
  Node** table;

  HashTable();
  int Add(int key, UnicodeString info);
  Node* Find(int key);
  bool Delete(int key);
  int Hash(int key);
  int SolveTask();
};