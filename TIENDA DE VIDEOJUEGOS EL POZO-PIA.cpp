#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <cstdlib>
#include <stdlib.h> //new delate punteros 
#include <fstream> //archivos


using namespace std;

//declaracion de variables
int* item, * AL, registros;
string* nombre, * clas, * des, * cara, * genero; n = 1;
float* precio, * iva, * total;

// funciones void 
void alta();
void eliminar();
void modificar();
void lista();
void archivo();

int main()
{
	int opc;
	printf("\t **** El pozo ****\n");
	printf(" Agregar articulo[1], Modificar articulo[2], Eliminar articulo[3], Lista de articulos[4], Limpiar pantalla[5], Salir[6]\n");

	scanf_s("%d", &opc);

	switch (opc)
	{
	case 1:
		alta();
		system("pause");
		return main();
		break;

	case 2:
		modificar();
		system("pause");
		return main();
		break;

	case 3:
		eliminar();
		system("pause");
		return main();
		break;

	case 4:
		lista();
		system("pause");
		return main();
		break;

	case 5:
		system("cls");
		return main();
		break;

	case 6:
		exit();
		break;
	default:
		printf("Elige una opcion valida \n");
		system("pause");
		return main();
		break;


	}


}

void alta()
{
	printf("cuantos registros desea dar de alta \n");
	scanf_s("%d", &registros);
	item = new int[registros];
	AL = new int[registros];
	nombre = new string[registros];
	clas = new string[registros];
	cara = new string[registros];
	genero = new string[registros];
	des = new string[registros];
	precio = new float[registros];
	iva = new float[registros];
	total = new float[registros];

	for (int i = 0; i < registros; i++)
	{
		printf("ingrese un articulo \n");
		scanf_s("%d, &item[i]");
		do
		{
			if (item[i] != item[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf(" este articulo ya existe \n");
				printf("ingrese un articulo \n");
				scanf_s("%d", item[i]);
			}
		} while (n < registros);
		printf("Ingrese el año de lanzamiento \n");
		cin.ignore();
		scanf_s("%d", AL);
		printf("Ingrese el nombre del videojuego \n");
		getline(cin, nombre[i]);
		printf("Ingrese la clasificacion \n");
		getline(cin, clas[i]);
		printf("Ingrese las caractereisticas \n");
		getline(cin, cara[i]);
		printf("Ingrese el genero del videojuego \n");
		getline(cin, genero[i]);
		printf("Ingresde la descripcion \n");
		getline(cin, des[i]);
		printf("Ingrese el precio del videojuego \n");
		scanf_s("%f", &precio[i]);
		iva[i] = precio[i] * .16;
		total[i] = precio[i] + iva[i];



	}
}
void modificar()
{
	int modificar;
	do
	{

		printf("ingrese el numero de articulo que quiere modificar \n");
		scanf_s("%d", &modificar);
	} while (modificar < 0);

	for (int i = 0; i < registros; i++);
	{
		if (modificar == item[i]);
		{
			printf("Ingrese el a%cñ de lanzamiento del videojuego \n", 164);
			scanf_s("%d", AL[i]);
			printf("Ingrese el nombre del articulo \n");
			cin.ignore();
			getline(cin, nombre[i]);
			printf("Ingrese las caracteristicas del videojuego \n");
			getline(cin, cara[i]);
			printf("Ingrese la descripcion del videojuego \n");
			getline(cin, des[i]);
			printf("Ingrese el genero del videojuego \n");
			getline(cin, genero[i]);
			printf("Ingrese la clasificacion del videojuego \n");
			getline(cin, clas[i]);
			printf("\t Su precio unitario es de \n");
			scanf_s("%lf", &precio[i]);
			iva[i] = (precio[i] * .16);
			total[i] = (precio[i] + iva[i]);
		}

	}

}

void eliminar()
{
	int eliminar;
	printf("ingrese el numero de articulo que quiere eliminar \n");
	scanf_s("%d", &eliminar);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar == item[i]);
		{
			item[i] = 0;
		}
	}
}

void lista()
{
	int op2;
	string busc;
	printf("1. Clasificacion \n, 2.Genero \n");
	scanf_s("%d", &op2);
	switch (op2)
	{
	case 1:
		printf("ingrese la clasificacion que desea buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clas[i] == busc);
			{
				printf("articulo: %d", item[i]);
				printf("año: %d", AL[i]);
				printf("videojuego: %s", nombre[i].c_str());
				printf("clasificaccion: %s", clas[i].c_str());
				printf("genero: %s", genero[i].c_str());
				printf("caracteristicas: %s", cara[i].c_str());
				printf("descripcion: %s", des[i].c_str());
				printf("subtotal: %f", precio[i]);
				printf("iva: %f", iva[i]);
				printf("total: %f", total[i]);
			}
		}
		break;

	case 2:
		printf("ingrese la clasificacion que desa buscar \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clas[i] == busc);
			{
				printf("articulo: %d", item[i]);
				printf("año: %d", AL[i]);
				printf("videojuego: %s", nombre[i].c_str());
				printf("clasificaccion: %s", clas[i].c_str());
				printf("genero: %s", genero[i].c_str());
				printf("caracteristicas: %s", cara[i].c_str());
				printf("descripcion: %s", des[i].c_str());
				printf("subtotal: %f", precio[i]);
				printf("iva: %f", iva[i]);
				printf("total: %f", total[i]);
			}
		}
		break;


	}
}