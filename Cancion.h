#ifndef CANCION_H
#define CANCION_H
#include <iostream>
#include <string>
using namespace std;

class Cancion {
	private:
		string nombre;
		string artista;
		string genero;
		string duracion;

	public:
		Cancion();
		Cancion(string,string,string, string);
		~Cancion();
		string getNombre();
		string getArtista();
		string getGenero();
		string getDuracion();
		void setNombre(string);
		void setArtista(string);
		void setGenero(string);
		void setDuracion(string);
};

#endif