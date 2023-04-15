
#ifndef TOUR_HPP
#define TOUR_HPP
#pragma once
#include "Piece.hpp"

class Tour : public Piece
{
public:
    Tour(Couleur couleur);
    bool mouvementValide(int x, int y) const override;
};

#endif // TOUR_HPP
