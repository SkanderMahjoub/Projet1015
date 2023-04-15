
#ifndef ROI_HPP
#define ROI_HPP
#pragma once
#include "Piece.hpp"

class Roi : public Piece
{
public:
    Roi(Couleur couleur);
    bool mouvementValide(int x, int y) const override;
};

#endif // ROI_HPP
