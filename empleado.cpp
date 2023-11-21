#include "iostream"

using namespace std;

struct DatosPersona{
	string nombre;
	string inicial;
	int edad;
	float nota;
};

int main(){
	// new Datos Persona * 50;
	DatosPersona * empleado = new DatosPersona[50];
	
	for (int i = 0; i < 5; i++){
		cout << "Digite el nombre del empleado " << i + 1 << ": ";
		cin >> empleado[i].nombre;
	}
	
	
	cout << "\n\n ***************** EMPLEADOS ***************** \n\n";
	for (int i = 0; i < 5; i++){
		cout << "El nombre del empleado  " << i + 1 << " es:" << empleado[i].nombre << endl;
	}
}
