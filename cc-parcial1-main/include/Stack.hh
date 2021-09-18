#pragma once
#include "Node.hh"
#include "Pieces.hh"

class Stack
{
private:
  Node* head{nullptr};
public:
  Stack();
  ~Stack();
  void Pop(); 
  void Push(Pieces*& Pieces);
  bool IsEmpty() const;
  void Print();
};
