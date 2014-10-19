// Arreglos tarea de vectores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;
const unsigned int CAPACITY = 1000;


int _tmain(int argc, _TCHAR* argv[])
{
	bool continuar = false;
	do
	{
		unsigned int seleccion;
		cout << "2. Calcular el mayor valor de una lista de N números" << endl;
		cout << "Seleccion: ";
		cin >> seleccion;

		switch (seleccion)
		{
		case  2:{
					unsigned int cant;
					cout << endl <<"Ingrese la cantidad de numeros a manejar (menor a 1000): ";
					cin >> cant;
					while (cant >1000 || cant < 0){
						cout << "Cantidad invalida por favor ingrese una cantidad entre 0 y 1000";
					}
					int *vector;
					vector = new int[CAPACITY];
			//		int vector[CAPACITY];

					for (unsigned int i = 0; i <cant; i++)
					{
						cout << "Ingrese el Valor " << i + 1 << ": ";
						cin >> vector[i];
					}

					for (unsigned int i = 0; i < cant; i++)
					{
						cout << "Vector " << i + 1 << " = \t" << vector[i];
						cout << endl;
					}

						int i1 = 0, i2 = 1;
						do
						{
							if (vector[i1] < vector[i2])
							{
								i1 = i2;
								i2++;
							}
							else{
								i2++;
							}
						} while (i2 < cant);

					cout << endl << endl << "El numero mayor es: " << vector[i1] << endl;

					delete[] vector;
					vector = NULL;

					break;
		}
		default:{
					cout << endl <<"Seleccion Invalida.";
		}
			break;
		}

		cout << endl << "Si desea volver al menu persione 1: \t";
		int a;
		cin >> a;
		if (a == 1){
			continuar = true;
		}
		else{
			continuar == false;
		}
	} while (continuar);

	cout << endl;
	system("PAUSE");
	return 0;
}

