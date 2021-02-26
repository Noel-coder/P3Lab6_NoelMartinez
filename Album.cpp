#include "Album.h"

Album::Album(){
	
}

Album::Album(string nombreAlbum){
	this-> nombreAlbum = nombreAlbum;
}
//destructor
Album::~Album(){
	cout << "Se destruyo el album" << endl;
}

string Album::getNombreAlbum(){
	return this -> nombreAlbum;
}

void Album::setNombreAlbum(string _nombreAlbum){
  this->nombreAlbum = _nombreAlbum;
}