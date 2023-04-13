#include <iostream>
#include <fstream>
#include "Piece.hpp"
using namespace std;

Piece::Piece(int x, int y, Couleur couleur, Type type) : 
	x_(x), 
	y_(y),
	couleur_(couleur),
	type_(type)
{}

//Piece::Piece(const Piece& p)
//{
//	init(p.x(), p.y(), p.iswhite());
//}

Piece::~Piece() {
}

//Piece& Piece::operator=(const Piece& p) {
//	this->m_x = p.x();
//	this->m_y = p.y();
//	this->m_white = p.isWhite();
//
//	return *this; // On retourne une référence sur l'objet courant
//}


void Piece::move(int x, int y)
{
	if (mouvementValide(x,y)) {
	x_ = x;
	y_ = y;
}
}

int Piece::getX() const
{
	return x_;
}

int Piece::getY() const
{
	return y_;
}

bool Piece::mouvementValide(int x, int y) const
{
	return true;
}

Couleur Piece::getCouleur() const
{
	return couleur_;
}

bool Piece::memePlace(const Piece& p) const
{
	return ((x_ == p.getX()) && (y_ == p.getY()));
}

ostream& (ostream& out, const Piece& p)
{
	throw gcnew System::NotImplementedException();
}
