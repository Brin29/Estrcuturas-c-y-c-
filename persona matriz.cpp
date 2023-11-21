#include "iostream"

using namespace std;
struct datoPersona{
	string nombre;
	int edad;
};

//f = fila
//c = columna
int main(){
	struct datoPersona persona[50][50];	
	int f, c, count = 1;
	
	cout << "Digite el tamanio de las fila: ";
	cin >> f;
	cout << "Digite el tamanio de la columna: ";
	cin >> c;
	
	cout << " \n\n********************* INGRESE LOS DATOS DE LAS PERSONAS ******************\n\n";
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << "Digite el nombre del empleado " << count << ":";
			cin >> persona[i][j].nombre; 
			cout << "Digite la edad del empleado " << count << ":";
			cin >> persona[i][j].edad; 
			count++;
			cout << "\n\n";
		}
	}
	
	count = 1;
	
	cout << " \n\n********************* DATOS DE LAS PERSONAS ******************\n\n";
	for (int i = 0; i < f; i++){
		for (int j = 0; j < c; j++){
			cout << "El nombre de la persona  " << count << " es: " << persona[i][j].nombre << "\n\n";
			cout << "La edad de la persona  " << count << " es: " << persona[i][j].edad << "\n\n";
			count++;
			cout << "\n\n";
		}
	}
	
	
}
