
#ifndef CAVALIER_HPP
#define CAVALIER_HPP
#pragma once
#include "Piece.hpp"

class Cavalier : public Piece
{
public:
    Cavalier(Couleur couleur);
    bool mouvementValide(int x, int y) const override;
};

#endif // CAVALIER_HPP
