#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "pieces is empty" << std::endl;
  }
  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(Pieces*& pieces)
{
  if(IsEmpty())
  {
    head = new Node(pieces);
  }
  else
  {
    Node* back{head};
    head = new Node(pieces);
    head->next = back;
  }
}

void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};

    std::cout << "list:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "pieces material: " << current->GetPieces()->GetMaterial() << std::endl;
      std::cout << "piece: " << current->GetPieces()->GetPiece() << std::endl;
      std::cout << "piece amount: " << current->GetPieces()->GetAmount() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}


