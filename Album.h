#ifndef ALBUM_H
#define ALBUM_H
#include "Cancion.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Album {
	private:
		string nombreAlbum;
		vector<Cancion*> listaCanciones;
	public:
		Album();
		Album(string);
		~Album();
		Album(vector<Cancion*>);
		string getNombreAlbum();
		void setNombreAlbum(string);
};

#endif