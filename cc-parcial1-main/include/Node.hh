#pragma once
#include "Pieces.hh"

class Node
{
private:
  Pieces* PiecesNode{};
public:
  Node* next{};
  Node(Pieces*& PiecesNode);
  ~Node();

  Pieces* GetPieces();
};
