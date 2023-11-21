#include "iostream"
using namespace std;

//Fecha de nacimiento
struct fecha{
	int dia, mes, anio;
};

//Objeto estudiante
struct testudiante{
	long int codigo;
	string nombre;
	int edad;
	string sexo;
	int numeroNotas;
	float notas[10];
	float definitiva;
	fecha fechanac;
};
//Funciones
void functionLlenar(testudiante objeto[], int longitud);
int functionMayorProm(testudiante objeto[], int longitud);

//Funciones
void functionLlenar(testudiante objeto[], int longitud){
	int i, j;
	float suma;
	
	for (int i = 0; i < longitud; i++){
		
		cout << "\n\n *************** DATOS ESTUDIANTE *************** \n\n";
		cout << "Digite el codigo del estudiante: ";
		cin >> objeto[i].codigo;
		fflush(stdin);
		cout << "Digite el nombre del estudiante: " ;
		cin >> objeto[i].nombre;
		fflush(stdin);
		cout << "Digite la edad del estudiante: " ;
		cin >> objeto[i].edad;
		fflush(stdin);
		cout << "Digite el sexo del estudiante: " ;
		cin >> objeto[i].sexo;
		fflush(stdin);
		cout << "Digite la cantidad de notas: ";
		cin >> objeto[i].numeroNotas;
		suma = 0;
		
		for (j = 0; j < objeto[i].numeroNotas; j++){
			cout << "Digite el valor de la nota " << j+1 << ":";
			cin >> objeto[i].notas[j];
			suma += objeto[i].notas[j];
		}
		
		objeto[i].definitiva = suma / objeto[i].numeroNotas;
		cout << "\n *********** FECHA DE NACIMIENTO ************ \n ";
		cout << "\nDia: ";
		cin >> objeto[i].fechanac.dia;
		cout << "\nMes: ";
		cin >> objeto[i].fechanac.mes;
		cout << "\nAnio: ";
		cin >> objeto[i].fechanac.anio;
	}
}

int functionMayorProm(testudiante objeto[], int longitud){
		int i, k;
		float h = 0;
		for (i = 0; i < longitud; i++){
			if (objeto[i].definitiva > h){
				h = objeto[i].definitiva;
				k = i;
			}
		}
	return (k);	
	}

int main(){
	int n, pos;
	cout << "Ingrese la cantidad de estudiantes:\t";
	cin >> n;
	testudiante  E[n];
	functionLlenar(E, n);
	pos = functionMayorProm(E, n);
	cout << "El estudiante que obtuvo la mayor nota: " << E[pos].nombre;
	
	return 0;
}
