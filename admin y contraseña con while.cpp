#include <iostream>
#include <string>

using namespace std;

int main() {
	// Datos configurados
	string usuarioCorrecto = "admin";
	int claveCorrecta = 2026;
	
	// Variables para el ingreso
	string usuario;
	int clave;
	int intentosFallidos = 0;
	bool acceso = false;
	
	cout << "Creador: Kevin Andres Rivas Velasquez" << endl;
	cout << "------------------------------------" << endl;
	
	// Ciclo while: se repite mientras no haya acceso
	while (acceso == false) {
		cout << "\nIngrese nombre de usuario: ";
		cin >> usuario;
		cout << "Ingrese contrasena numerica: ";
		cin >> clave;
		
		// Uso de AND (&&) y comparaciones de cadena y numero
		if (usuario == usuarioCorrecto && clave == claveCorrecta) {
			cout << "Acceso concedido :)" << endl;
			acceso = true; // Rompe el ciclo
		} else {
			intentosFallidos++;
			cout << "Acceso no autorizado" << endl;
			cout << "Intentos fallidos: " << intentosFallidos << endl;
		}
	}
	
	return 0;
}
