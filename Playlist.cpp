#include "Playlist.h"

Playlist::Playlist(){
	
}

Playlist::Playlist(string nombrePlaylist){
	this-> nombrePlaylist = nombrePlaylist;
}
//destructor
Playlist::~Playlist(){
	cout << "Se destruyo el Playlist" << endl;
}

string Playlist::getNombrePlaylist(){
	return this -> nombrePlaylist;
}

void Playlist::setNombrePlaylist(string _nombrePlaylist){
  this->nombrePlaylist = _nombrePlaylist;
}