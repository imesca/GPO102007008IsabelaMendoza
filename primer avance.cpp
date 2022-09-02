// primer avance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opcion;
    float preciounitario, impuesto, total;
    string nombre, lanzamiento, clasificacion, caracteristicas, descripcion, genero;

    cout << "\t ***Videojuegos Gamepo*** \n";
    cout << "1.- Agregar Articulo \n 2.- Modificar Articulo \n 3.- Eliminar Articulo \n 4.- Lista de Articulos\n 5.- Limpiar pantalla \n 6.- Salir\n";
    cin >> opcion;

    switch (opcion)
    {
    case 1: //Agregar articulo
        cout << "ingrese el numero del articulo \n";
        cin >> numarticulo;
        cout << "ingrese el nombre del articulo \n";
        cin.ignore(); 
        getline(cin, nombre);
        cout << "ingrese el año de lanzamiento del articulo \n";
        cin.ignore();
        getline(cin, lanzamiento);
        cout << "ingrese la clasificacion del articulo \n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "ingrese las caracteristicas del articulo \n";
        cin.ignore();
        getline(cin, caracteristicas);
        cout << "ingrese la descripcion del articulo \n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "ingrese el genero del articulo \n";
        cin.ignore();
        getline(cin, genero);
        cout << "ingrese el precio unitario del articulo \n";
        cin.ignore();
        cin >> preciounitario;
        impuesto = (preciounitario*1.16); 
        cout << "el valor del impuesto es de:" << impuesto << endl;
        total = preciounitario + impuesto;
        cout << "el total es de: $" << total <<endl; 

        return main();
        break;

    case 2: //modificar articulo
        break;

    case 3: // eliminar articulo
        break;

    case 4: // lista de articulos
        break;

    case 5: //limpiar pantalla
        system("cls");
        return main();
        break;

    case 6: //salir
        cout << "gracias \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();




    }

}

