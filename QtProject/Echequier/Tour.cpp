#include "Tour.hpp"
#include "Piece.hpp"
#include <iostream>
#include <cassert>
using namespace std;

Tour::Tour(Couleur couleur){
    Piece tourDroite(6, couleur == Couleur::Blanc ? 1 : 8, couleur, Type::Tour);
    Piece tourGauche(3, couleur == Couleur::Blanc ? 1 : 8, couleur, Type::Tour);
}

bool Tour::mouvementValide(int x, int y) const
{
    // Vérifie si les mouvement du roi sont valide (même pour manger une pièce adverse).
    assert(x > 0 && x < 9 && y > 0 && y < 9);
    if (x == this->x_ || y == this->y_ )
        return true;
    return false;
}

