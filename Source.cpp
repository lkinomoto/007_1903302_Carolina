#include<iostream>
#include<string>
#include<string.h>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct Tienda
{
	int Num_Art, Año, Numoc;
	string Nombre_V, Clasificacion, Caract, Descrip, Genero, Consola;
	float Precio_U, Total, Imp;
};

int main()
{
	Tienda Videojuegos[3];
	int Option, Busqueda;

	do {

		printf("\t *** MetroDAX *** \n");
		printf(" 1. Agregar articulo \n 2. Modificar Articulo \n 3. Eliminar articulo \n 4. Lista de articulos vigentes \n 5. Limpiar pantalla \n 6. Salir \n\n");
		scanf_s("%d", &Option);
		printf("\n");

		switch (Option)
		{
		case 1: //Agregar articulo
			for (int i = 0; i < 3; i++)
			{
				Videojuegos[i].Num_Art = 191022 + i;
				printf("Numero del articulo: %d \n", Videojuegos[i].Num_Art);
				
				do
				{
					printf("Ingrese el numero de orden de compra: ");
					scanf_s("%d", &Videojuegos[i].Numoc);
				} while (Videojuegos[i].Numoc == Videojuegos[i - 1].Numoc || Videojuegos[i].Numoc == Videojuegos[i - 2].Numoc);

				printf("Ingrese el nombre del videojuego: ");
				cin.ignore();
				getline(cin, Videojuegos[i].Nombre_V);
				printf("Ingrese el a%co de lanzamiento: ", 164);
				scanf_s("%d", &Videojuegos[i].Año);
				printf("Ingrese la clasificaci%cn: ", 162);
				cin.ignore();
				getline(cin, Videojuegos[i].Clasificacion);
				printf("Ingrese las caracteristicas: ");
				cin.ignore();
				getline(cin, Videojuegos[i].Caract);
				printf("Ingrese el g%cnero: ", 130);
				cin.ignore();
				getline(cin, Videojuegos[i].Genero);
				printf("Ingrese la consola: ");
				cin.ignore();
				getline(cin, Videojuegos[i].Consola);
				printf("Ingrese el precio unitario: ");
				scanf_s("%f", &Videojuegos[i].Precio_U);
				Videojuegos[i].Imp = Videojuegos[i].Precio_U * .16;
				Videojuegos[i].Total = Videojuegos[i].Precio_U + Videojuegos[i].Imp;
				printf("\n");
			}
			return main();
			break;

		case 2: //Modificar articulo
			break;

		case 3: //Eliminar articulo
			break;

		case 4: //Lista de articulos vigentes
			int Opc2;
			printf("1. Numero de orden de compra \n 2. Listas vigentes \n\n");
			scanf_s("%d", &Opc2);
			printf("\n");

			if (Opc2 == 1)
			{
				printf("Ingrese el numero de orden de compra: ");
				scanf_s("%d", &Busqueda);

				//imprimir los datos por posicion 
				for (int i = 0; i < 3; i++)
				{
					if (Busqueda == Videojuegos[i].Numoc)
					{
						printf("Numero del articulo: %d", Videojuegos[i].Num_Art);
						printf("Numero de orden de compra: %d", Videojuegos[i].Numoc);
						printf("Nombre del videojuego: %s", Videojuegos[i].Nombre_V.c_str());
						printf("A%co de lanzamiento: %d", Videojuegos[i].Año);
						printf("Clasificaci%cn: %s", Videojuegos[i].Clasificacion.c_str());
						printf("Caracteristicas: %s", Videojuegos[i].Caract.c_str());
						printf("G%cnero: %s", Videojuegos[i].Genero.c_str());
						printf("Consola: %s", Videojuegos[i].Consola.c_str());
						printf("Precio unitario: %f", Videojuegos[i].Precio_U);
						printf("Total: %f", Videojuegos[i].Total);
					}
				}
			}
			else
			{
				for (int i = 0; i < 3; i++)
				{
					if (Videojuegos[i].Numoc != 0)
					{
						printf("Numero del articulo: %d", Videojuegos[i].Num_Art);
						printf("Numero de orden de compra: %d", Videojuegos[i].Numoc);
						printf("Nombre del videojuego: %s", Videojuegos[i].Nombre_V.c_str());
						printf("A%co de lanzamiento: %d", 164, Videojuegos[i].Año);
						printf("Clasificaci%cn: %s", 162, Videojuegos[i].Clasificacion.c_str());
						printf("Caracteristicas: %s", Videojuegos[i].Caract.c_str());
						printf("G%cnero: %s", 130, Videojuegos[i].Genero.c_str());
						printf("Consola: %s", Videojuegos[i].Consola.c_str());
						printf("Precio unitario: %f", Videojuegos[i].Precio_U);
						printf("Total: %f", Videojuegos[i].Total);
					}
				}
			}
			break;

		case 5: //Limpiar pantalla
			system("cls");
			return main();
			break;

		case 6: //Salir
			printf("Gracias por utilizar el programa \n");
			break;

		default:
			printf("Ingrese una de las opciones correcta \n");
			return main();

		}
	} while (Option != 6);
	system("Pause");
}
