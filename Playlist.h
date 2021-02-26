#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Cancion.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Playlist {
	private:
		string nombrePlaylist;
		vector<Cancion*>listaCancionesP;
	public:
		Playlist();
		Playlist(string);
		~Playlist();
		Playlist(vector<Cancion*>);
		string getNombrePlaylist();
		void setNombrePlaylist(string);
};

#endif