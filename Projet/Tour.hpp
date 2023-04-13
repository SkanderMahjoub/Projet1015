#pragma once
#include "Piece.hpp"

class Tour : public Piece
{
public:
	Tour(Couleur couleur);
	bool mouvementValide(int x, int y) override;
};


