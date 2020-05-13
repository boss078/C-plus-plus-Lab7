//---------------------------------------------------------------------------

#ifndef NodeH
#define NodeH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>

class Node
{
	public:
  int key;
  UnicodeString info;
  Node* next;

  Node();
  Node(int key, UnicodeString info, Node* next);
};