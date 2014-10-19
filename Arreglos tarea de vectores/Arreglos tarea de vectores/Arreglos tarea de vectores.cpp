// Arreglos tarea de vectores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bool continuar = false;
	do
	{
		unsigned int seleccion;
		cout << "2. Calcular el mayor valor de una lista de N números";
		cout << "Seleccion: ";
		cin >> seleccion;

		switch (seleccion)
		{
		case  2:{
					unsigned int cant;
					cout << "Ingrese la cantidad de numeros a manejar: ";
					cin >> cant;

					const unsigned int CAPACITY = cant - 1;
					int vector[CAPACITY];

					for (unsigned int i = 0; i <= CAPACITY; i++)
					{
						cout << "Ingrese el Valor " << i + 1 << ": ";
						cin >> vector[i];
					}

					for (unsigned int i = 0; i <= CAPACITY; i++)
					{
						cout << "Vector " << i + 1 << " = \t" << vector[i];
						cout << endl;
					}

		}
		default:{
					cout << "Seleccion Invalida.";
		}
			break;
		}

		cout << endl << "Si desea continuar presione 1";
		int a;
		cin >> a;
		if (a == 1){
			continuar = true;
		}
	} while (continuar);

	cout << endl;
	system("PAUSE");
	return 0;
}

