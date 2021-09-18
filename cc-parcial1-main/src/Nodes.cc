#include "Node.hh"

Node::Node(Pieces*& pieces){
  this->PiecesNode = pieces;
}

Node::~Node(){
}

Pieces* Node::GetPieces(){
  return PiecesNode;
}