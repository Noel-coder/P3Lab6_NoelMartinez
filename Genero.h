#ifndef GENERO_H
#define GENERO_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Genero {
	private:
		string nombreGenero;
	public:
		Genero();
		Genero(string);
		~Genero();
		string getNombreGenero();
		void setNombreGenero(string);
		void listarGenero();
};

#endif