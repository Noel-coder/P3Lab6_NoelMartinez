#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include "Cancion.h"
#include "Album.h"
#include "Genero.h"
#include "Playlist.h"
using namespace std;

int main() {
	int opcion=1;
	while(opcion != 5) {
		cout << "Menu" << endl
		     << "1. Mantenimiento: " << endl
		     << "2. Sobrecargar el operador *: " << endl
		     << "3. Sobrecargar el operador +: "<< endl
		     << "4. Sobrecargar el operador -: "<<endl
		     << "5. Salir "<<endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				int opcionSubmenu=1;
				while(opcionSubmenu!=6) {
					cout<< "[Mantenimiento]" << endl
					    << "1. Agregar: " << endl
					    << "2. Modificar: " << endl
					    << "3. Eliminar: " << endl
					    << "4. Listar canciones y generos: " << endl
					    << "5. Listar albumes y playlists: " << endl
					    << "6. Regresar al menu principal: " << endl;
					cout << "Ingrese una opcion: " << endl;
					cin >> opcionSubmenu;
					switch(opcionSubmenu) {
						case 1: {

							break;
						}
						case 2: {

							break;
						}
						case 3: {

							break;
						}
						case 4: {

							break;
						}
						case 5: {

							break;
						}
						case 6: {
							//menu principal
							break;
						}
					}
				}
			}
			case 2: {

				break;
			}
			case 3: {

				break;
			}
			case 4: {

				break;
			}
			case 5: {
				cout << "Gracias por usar el programa" << endl;
				break;
			}
		}
	}
	return 0;
}