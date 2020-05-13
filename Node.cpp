//---------------------------------------------------------------------------

#pragma hdrstop

#include "Node.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

Node::Node()
{
  this->key = NULL;
  this->info = NULL;
  this->next = NULL;
}

Node::Node(int key, UnicodeString info, Node* next)
{
  this->key = key;
  this->info = info;
  this->next = next;
}