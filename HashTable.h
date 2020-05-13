//---------------------------------------------------------------------------

#ifndef HashTableH
#define HashTableH
//---------------------------------------------------------------------------
#endif

#define TABLE_LENGTH 256
#include "Node.h"

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