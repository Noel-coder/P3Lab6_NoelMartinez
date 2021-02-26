#include "Genero.h"

Genero::Genero(){
	
}

Genero::Genero(string nombreGenero){
	this-> nombreGenero = nombreGenero;
}
//destructor
Genero::~Genero(){
	cout << "Se destruyo el genero" << endl;
}

string Genero::getNombreGenero(){
	return this -> nombreGenero;
}

void Genero::setNombreGenero(string _nombreGenero){
  this->nombreGenero = _nombreGenero;
}