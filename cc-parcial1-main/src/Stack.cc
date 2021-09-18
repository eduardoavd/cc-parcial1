#include "Pieces.hh"

Pieces::Pieces(std::string material, std::string piece, int amount)
{
  this->material = material;
  this->piece = piece;
  this->amount = amount;
}

Pieces::~Pieces(){
}

std::string Pieces::GetMaterial() const
{
  return material;
}
std::string Pieces::GetPiece() const
{
  return piece;
}
int Pieces::GetAmount() const 
{
  return amount;
}