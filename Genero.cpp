#include "Genero.h"

Genero::Genero() {

}

Genero::Genero(string nombreGenero) {
	this-> nombreGenero = nombreGenero;
}
//destructor
Genero::~Genero() {

}

string Genero::getNombreGenero() {
	return this -> nombreGenero;
}

void Genero::setNombreGenero(string _nombreGenero) {
	this->nombreGenero = _nombreGenero;
}

