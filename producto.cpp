#include "iostream"

using namespace std;

struct Producto{
	string codigo;
	string descripcion;
	int precio;	
};

int main(){
	struct Producto prod1;
	struct Producto prod2;
	
	
	cout << " ***************** Producto 1 ***************** \n\n";
	cout << "Digite el codigo del producto 1: ";
	cin >> prod1.codigo;
	cout << "Digite la descripcion del producto 1: ";
	cin >> prod1.descripcion;
	cout << "Digite el precio del producto 1: ";
	cin >> prod1.precio;
	
	cout << " ***************** Producto 2 ***************** \n\n";
	cout << "Digite el codigo del producto 2: ";
	cin >> prod2.codigo;
	cout << "Digite la descripcion del producto 2: ";
	cin >> prod2.descripcion;
	cout << "Digite el precio del producto 2: ";
	cin >> prod2.precio;
	
	
	cout << "\n\n ***************** Producto 1 ***************** \n\n";
	cout << "\t\t Codigo: " << prod1.codigo << endl;
	cout << "\t\t Descripcion: " << prod1.descripcion << endl;
	cout << "\t\t Precio: " << prod1.precio << "\n\n";
	
	cout << "\n\n ***************** Producto 2 ***************** \n\n";
	cout << "\t\t Codigo: " << prod2.codigo << endl;
	cout << "\t\t Descripcion: " << prod2.descripcion << endl;
	cout << "\t\t Precio: " << prod2.precio << "\n\n";
	
	
	if(prod1.precio > prod2.precio){
		cout << "El precio del producto 1 " <<  prod1.precio << " es mayor que el precio del producto 2 " << prod2.precio;
	}
	if (prod1.precio == prod2.precio){
		cout << "Ambos productos tienen el mismo precio";
	}
	else {
		cout << "El precio del producto 2 " <<  prod2.precio << " es mayor que el precio del producto 1 " << prod1.precio;
	}
}
