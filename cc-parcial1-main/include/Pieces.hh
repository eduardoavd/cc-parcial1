#pragma once

#include<string>

class Pieces
{
private:
  std::string material;
  std::string piece;
  int amount;
public:
  Pieces(std::string material, std::string piece,  int amount);
  ~Pieces();
  std::string GetMaterial() const;
  std::string GetPiece() const;
  int GetAmount()const;
};
