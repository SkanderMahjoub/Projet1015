#pragma once
#include "Piece.hpp"

class Roi : public Piece
{
public:
	Roi(Couleur couleur);
    bool mouvementValide(int x, int y) const override;
};
