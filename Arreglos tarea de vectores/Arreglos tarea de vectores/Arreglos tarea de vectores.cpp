// Arreglos tarea de vectores.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
//#include <SDKDDKVer.h>

using namespace std;
const unsigned int CAPACITY = 1000;

//Declaracion de Funciones
void llenarVector(unsigned int cant, int vector[]);
// llenarVector - pide los valores uno por uno para rellenar los vectores hasta llegar a una cantidad determinada.
// cant - cantidad de numeros a pedir para llenar el vector
//vector[] - vector a rellenar

void validarCantidad(unsigned int &cant);
// validarCantidad - revisa que la cantidad no sea mayor que la capacidad del vector
// cant - numero de valores a trabajar con el vector

void imprimirVector(unsigned int , int []);
// imprimirVector - Imprime una lista con cada numero del vector
// cant - numero de valores a trabajar con el vector
//vector[] - vector a imprimir

int main()
{
	bool continuar = false;
	do
	{
		unsigned int seleccion;
		cout << "1. Multiplicar 1 vector por 1 escalar" << endl;
		cout << "2. Calcular el mayor valor de una lista de N n�meros" << endl;
		cout << "3. Dada una lista de N números, averiguar cuales de ellos son múltiplos de un número K " << endl;
		cout << "4. Dada una lista de N números, hallar la suma total de dichos números" << endl;
		cout << "5. Dada una lista de N números, hallar de forma separada: La suma de los números pares y La suma de los números impares" << endl;
		cout << "Seleccion: ";
		cin >> seleccion;

		switch (seleccion)
		{
		case 1:{
				   //Pedir el tama�o del vector
				   unsigned int cant;
				   cout << endl << "Ingrese la cantidad de numeros a manejar (menor a 1000): ";
				   cin >> cant;
				   //Validar que no se pase de 1000
				   while (cant >1000 || cant < 0){
					   cout << "Cantidad invalida por favor ingrese una cantidad entre 0 y 1000";
				   }
				   //Declarar vector en memoria dinamica
				   int *vector;
				   vector = new int[CAPACITY];
				   //int vector[CAPACITY];
				   //Llenar el vector
				   for (unsigned int i = 0; i <cant; i++)
				   {
					   cout << "Ingrese el Valor " << i + 1 << ": ";
					   cin >> vector[i];
				   }

				   //Imprimir el vector
				   for (unsigned int i = 0; i < cant; i++)
				   {
					   cout << "Vector " << i + 1 << " = \t" << vector[i];
					   cout << endl;
				   }

				   //Pedir el escalar a multiplicar
				   int k;
				   cout <<endl << "Ingrese el numero escalar a multiplicar por el vector: ";
				   cin >> k;

				   for (unsigned int i = 0; i < cant; i++)
				   {
					   vector[i] = vector[i] * k;
				   }

				   //Imprimir el vector
				   cout << endl << "El vector resultante es: " << endl;
				   for (unsigned int i = 0; i < cant; i++)
				   {
					   cout << "Vector " << i + 1 << " = \t" << vector[i];
					   cout << endl;
				   }
				   delete [] vector;
				   vector = NULL;
				   break;
		}

		case  2:{
					//Pedir el tama�o del vector
					unsigned int cant;
					cout << endl <<"Ingrese la cantidad de numeros a manejar (menor a 1000): ";
					cin >> cant;
					//validar que no se pase de 1000
					while (cant >1000 || cant < 0){
						cout << "Cantidad invalida por favor ingrese una cantidad entre 0 y 1000";
					}

					//Declarar vector en memoria dinamica
					int *vector;
					vector = new int[CAPACITY];
					//int vector[CAPACITY];

					//Llenar el vector
					for (unsigned int i = 0; i <cant; i++)
					{
						cout << "Ingrese el Valor " << i + 1 << ": ";
						cin >> vector[i];
					}

					//Imprimir el vector
					for (unsigned int i = 0; i < cant; i++)
					{
						cout << "Vector " << i + 1 << " = \t" << vector[i];
						cout << endl;
					}

					//Operaciones para determinar el numero mayor
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
		case 3:{
				   cout << "3. Dada una lista de N números, averiguar cuales de ellos son múltiplos de un número K " << endl;
				   int *vector;
				   vector = new int[CAPACITY];
				   unsigned int cant = 0;
				   int k = 0;

				   // Pedir la cantidad
				   validarCantidad(cant);
				   // Llenar el vector
				   llenarVector(cant, vector);

				   cout << "Ingrese el escalar: ";
				   cin >> k;

				   cout << "Los valores multiplos de " << k << " son: ";
				   for (unsigned int  i = 0; i < cant; i++)
				   {
					   if ((vector[i] % k) == 0){
						   cout << vector[i] << ", " ;
					   }
				   }
				   cout << endl;



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


//Definicion de Funciones
void llenarVector(unsigned int cant, int vector[]){
	for (unsigned int i = 0; i <cant; i++)
	{
		cout << "Ingrese el Valor " << i + 1 << ": ";
		cin >> vector[i];
	}
}

void validarCantidad(unsigned int &cant){
	cout << "Ingrese la cantidad de numeros a trabajar: ";
	cin >> cant;
	while (cant > CAPACITY || cant < 0){
		if (cant > CAPACITY){
			cout << "la cantidad excede 1000, por favor ingrese una cantidad menor: ";
			cin >> cant;
		}
		if (cant < 0){
			cout << "La catidad es negativa por favor ingrese una positiva: ";
			cin >> cant;
		}
	}
	}

void imprimirVector(unsigned int cant, int vector[]){
	for (unsigned int i = 0; i < cant; i++)
	{
		cout << "Vector " << i + 1 << " = \t" << vector[i];
		cout << endl;
	}

}
