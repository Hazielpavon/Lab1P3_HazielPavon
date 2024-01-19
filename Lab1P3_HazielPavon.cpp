#include <iostream>
using namespace std;
int main()
{
	bool seguir = true;
	while (seguir) {
		cout << "Ingrese una opcion" << endl;
		cout << "1. Primer Ejercicio" << endl;
		cout << "2. Segundo Ejercicio" << endl;
		cout << "3. Salir" << endl;
		int opcion;
		cin >> opcion;
		switch (opcion) {
		case 1: {
			cout << "Ingrese un numero" << endl;
			int numero;
			cin >> numero;
			int prueba = 0;

			if (numero >= 0) {
				if (numero % 3 == 0 && numero % 5 == 0) {
					cout << "Viva Programar" << endl;
				}
				else if (numero % 3 == 0) {
					cout << "Viva" << endl;
				}
				else if (numero % 5 == 0) {
					cout << "Programar" << endl;
				}
				else {
					cout << "Salida: " << numero << endl;
				}
			}
			else {
				cout << "El numero debe ser un entero positivo" << endl;
			}
		}
			  break;
		case 2: {

			cout << "Ingrese un numero" << endl;
			int sumatoria;
			cin >> sumatoria;

			double arriba = 0.00;
			double abajo = 0.00;
			double respuesta = 0.00;
			int contador = 1;

			if (sumatoria > 0) {
				while (contador < sumatoria) {
					arriba += (2 * contador) - 1;
					abajo += contador * contador;
					abajo += contador * 1;
					respuesta += arriba / abajo;
					contador++;

				}
				cout << "La sumatoria desde 1 hasta " << sumatoria << " Es: " << respuesta << endl;
			}
			else {
				cout << "Ingrese un numero mayor o igual a 1" << endl;
			}
		}
			  break;
		case 3: {
			seguir = false;
		}
			  break;



		}


	}




}

