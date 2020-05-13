//---------------------------------------------------------------------------

#ifndef NodeH
#define NodeH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>

//Экземляр класса Node состоит из ключа,
//строки с информацией и ссылки на следующий экземляр Node

class Node
{
	public:
  int key;
  UnicodeString info;
  Node* next;

  Node();
  Node(int key, UnicodeString info, Node* next);
};