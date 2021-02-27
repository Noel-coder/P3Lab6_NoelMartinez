#include "Playlist.h"

Playlist::Playlist(){
	
}

Playlist::Playlist(string nombrePlaylist){
	this-> nombrePlaylist = nombrePlaylist;
}
//destructor
Playlist::~Playlist(){

}

string Playlist::getNombrePlaylist(){
	return this -> nombrePlaylist;
}

void Playlist::setNombrePlaylist(string _nombrePlaylist){
  this->nombrePlaylist = _nombrePlaylist;
}