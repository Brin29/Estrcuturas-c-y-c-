//DECLARACION DE REGISTROS
#include <conio.h>
#include <stdio.h>
#include <string>

//Definicion de la estructura "Persona"
struct Persona {
	char nombre[50];
	int edad;	
};

main(){
	// Declaracion de variable de tipo "Persona"
	struct Persona programador;
	struct Persona usuario;
	
	//Llenar datos para el programador
	printf ("\n ********************** Ingrese los datos del Programador ************************ \n");
	printf ("Ingrese el nombre del programador: ");
	scanf ("%s", programador.nombre);
	
	printf ( "Ingrese la edad del programador: ");
	scanf ("%d", &programador.edad);
	
	//Usuario 
	printf ("\n ********************** Ingrese los datos del Usuario ************************ \n");
	printf ("Ingrese el nombre del usuario: ");
	scanf ("%s", usuario.nombre);
	
	printf ("Ingrese la edad del usuario: ");
	scanf ("%s", &usuario.edad);

	//Imprimir informacion del usuario
	printf ("\n ********************** Datos del Programador ************************ \n");
	printf ("\n\t\t\tNombre: %s \n\n", programador.nombre);
	printf ("\n\t\t\tEdad: %d \n\n", &programador.edad);

	
	printf ("\n ********************** Datos del Usuario ************************ \n");
	printf ("\n\t\t\tNombre: %s \n", usuario.nombre);
	printf ("\n\t\t\tEdad: %d \n\n", &usuario.edad);
	
	return 0;
}
