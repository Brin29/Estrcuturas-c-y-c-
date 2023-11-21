//DECLARACION DE REGISTROS

#include "iostream"

using namespace std;
//Definicion de la estructura "Persona"
struct Persona {
	string nombre;
	int edad;	
};

int main(){
	// Declaracion de variable de tipo "Persona"
	struct Persona programador;
	struct Persona usuario;
	
	//Llenar datos para el programador
	cout << "\n ********************** Ingrese los datos del Programador ************************ \n";
	cout << "Ingrese el nombre del programador: ";
	cin >> programador.nombre;
	
	cout << "Ingrese la edad del programador: ";
	cin >> programador.edad;
	
	//Usuario 
	cout << "\n ********************** Ingrese los datos del Usuario ************************ \n";
	cout << "Ingrese el nombre del usuario: ";
	cin >> usuario.nombre;
	
	cout << "Ingrese la edad del usuario: ";
	cin >> usuario.edad;

	//Imprimir informacion del usuario
	cout << "\n ********************** Datos del Programador ************************ \n";
	cout << "\n\t\t\tNombre: " << programador.nombre << endl;
	cout << "\n\t\t\tEdad: " << programador.edad << "\n\n";
	
	
	cout << "\n ********************** Datos del Usuario ************************ \n";
	cout << "\n\t\t\tNombre: " << usuario.nombre << endl;
	cout << "\n\t\t\tEdad: " << usuario.edad << "\n\n";
	
	return 0;
}
