#ifndef CANCION_H
#define CANCION_H
#include "Genero.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Cancion {
	private:
		string nombre;
		string artista;
		Genero* genero;
		string duracion;
	public:
		Cancion();
		Cancion(string,string,Genero*, string);
		~Cancion();
		string getNombre();
		string getArtista();
		string getDuracion();
		void crearCancion(string,string,Genero*,string);
		void modificar(int, int);
		void eliminar(int);
		void setNombre(string);
		void setArtista(string);
		void setDuracion(string);
};
#endif