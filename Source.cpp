#include<iostream>
#include<string>
#include<string.h>
#include <conio.h>

using namespace std;
int main() 
{
	//string data="¡…Õ”⁄--·ÈÌÛ˙--—Ò";
	int Num_Art=0, AÒo=0, Option=0;
	string Nombre_V, Clasificacion, Caract, Descrip, Genero, Consola;
	float Precio_U = 0, Imp = 0, Total = 0;

	cout << "\t *** MetroDAX *** \n";
	cout << " 1. Agregar articulo \n 2. Modificar Articulo \n 3. Eliminar articulo \n 4. Lista de articulos vigentes \n 5. Limpiar pantalla \n 6. Salir \n";
	cin >> Option;

	switch (Option)
	{
	       case 1: //Agregar articulo
			   cout << "Numero del articulo: \n";
			   cin >> Num_Art;
			   cout << "Nombre del videojuego: \n";
			   cin.ignore();
			   getline(cin, Nombre_V);
			   cout << "AÒo de lanzamiento: \n";
			   cin >> AÒo;
			   cout << "ClasificaciÛn: \n";
			   cin.ignore();
			   getline(cin, Clasificacion);
			   cout << "Caracteristicas: \n";
			   cin.ignore();
			   getline(cin, Caract);
			   cout << "GÈnero: \n";
			   cin.ignore();
			   getline(cin, Genero);
			   cout << "Consola: \n";
			   cin.ignore();
			   getline(cin, Consola);
			   cout << "Precio unitario: \n";
			   cin >> Precio_U;
			   cout << "Impuesto: \n";
			   cin >> Imp;
			   Total = Precio_U + Imp;
			   cout << "Total: \n" << Total<<endl;
			   return main();
			   break;

		   case 2: //Modificar articulo
			   break;
			   
		   case 3: //Eliminar articulo
			   break;

		   case 4: //Lista de articulos vigentes
			   break;

		   case 5: //Limpiar pantalla
			   system("cls");
			   return main();
			   break;

		   case 6: //Salir
			   cout << "Gracias por utilizar el programa \n";
			   break;

		   default:
			   cout << "Ingrese una opciÛn correcta \n";
			   return main();

	}
}
