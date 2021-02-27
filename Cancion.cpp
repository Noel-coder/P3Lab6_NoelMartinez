#include "Cancion.h"
#include "Genero.h"

Cancion::Cancion() {

}

Cancion::Cancion(string nombre,string artista,Genero* genero,string duracion) {
	this->nombre = nombre;
	this->artista = artista;
	this->genero = genero;
	this->duracion = duracion;
}
//destructor
Cancion::~Cancion() {
}

string Cancion::getNombre() {
	return this->nombre;
}

void Cancion::setNombre(string _nombre) {
	this->nombre = _nombre;
}

string Cancion::getArtista() {
	return this->artista;
}

void Cancion::setArtista(string _artista) {
	this->artista = _artista;
}

/*string Cancion::getGenero(){
  return this->genero;
}

void Cancion::setGenero(string _genero){
  this->genero = _genero;
}*/

string Cancion::getDuracion() {
	return this->duracion;
}

void Cancion::setDuracion(string _duracion) {
	this->duracion = _duracion;
}

