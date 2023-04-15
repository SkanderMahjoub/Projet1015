#pragma once
#include "Piece.hpp"

class Cavalier : public Piece
{
public:
	Cavalier(Couleur couleur);
    bool mouvementValide(int x, int y) const override;
};

