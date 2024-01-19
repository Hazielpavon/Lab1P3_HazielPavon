#include <iostream>
using namespace std;
int main()
{
	bool seguir = true;

	while (seguir) {
		cout << "Ingrese una opcion" << endl;
		cout << "1. Primer Ejercicio" << endl;
		cout << "1. Segundo Ejercicio" << endl;
		cout << "3. Salir" << endl;
		int opcion;
		cin >> opcion;

		switch (opcion) {
		case 1: {

			cout << "Prueba" << endl;

		}

			  break;

		case 2: {
			cout << "Prueba2" << endl;
		}

			  break;

		case 3: {
			seguir = false;
		}

			  break;



		}


	}




}

