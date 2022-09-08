// Tienda de videojuegos -El Pozo-.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion, nombredelarrticulo, añodelanzamiento, clasificacion, caractjuego, descripjuego, generodeljuego, preuni, impuesto, PreciTO;
    float preciounitario = 0;
    string articulo, descripcion, categoria;

    cout << "\t ***El Pozo*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulo\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar Articulo
        cout << "\tIngrese el numero de articulo \n";
        cin >> numarticulo;
        cout << "\tingrese el nombre del articulo\n";
        cin >> nombredelarrticulo;
        cout << "\tingrese el año de lanzamiento\n";
        cin >> añodelanzamiento;
        cout << "\tingrese la clasificacion del articulo\n";
        cin >> clasificacion;
        cout << "\tingresar las caracteristicas del juego\n";
        cin >> caractjuego;
        cout << "\tingresse una descripcion del juego\n";
        cin >> descripjuego;
        cout << "\tingrese el genero del videojuego\n";
        cin >> generodeljuego;
        cout << "\tingrese el precio unitario del articulo\n";
        cin >> preuni;
        impuesto = (preuni * .16);
        cout << "\tel impuesto que se agrega al videojuego es de" << impuesto;
        PreciTO = (preuni + impuesto);
        cout << "el total del videojuego es" << PreciTO;
        
        return main();
        break;

    case 2: //Modificar Articulo
        break;

    case 3://Eliminar Articulo
        break;

    case 4: //Lista de Articulos
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }

