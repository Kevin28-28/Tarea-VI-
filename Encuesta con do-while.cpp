#include <iostream>
using namespace std;

int main() {
	int opcion;
	int c1 = 0, c2 = 0, c3 = 0, c4 = 0; // Contadores para cada nota
	int totalValidas = 0;
	
	cout << "Creador: Kevin Andres Rivas Velasquez" << endl;
	
	do {
		cout << "\n--- MENU DE CALIFICACION DEL SERVICIO ---" << endl;
		cout << "1 = Malo" << endl;
		cout << "2 = Regular" << endl;
		cout << "3 = Bueno" << endl;
		cout << "4 = Excelente" << endl;
		cout << "0 = Finalizar encuesta" << endl;
		cout << "Ingrese su opcion: ";
		cin >> opcion;
		
		switch(opcion) {
			case 1: c1++; totalValidas++; break;
			case 2: c2++; totalValidas++; break;
			case 3: c3++; totalValidas++; break;
			case 4: c4++; totalValidas++; break;
			case 0: cout << "Finalizando encuesta..." << endl; break;
			default: 
				cout << "Opcion invalida. Intente nuevamente" << endl;
				break;
		}
		
	} while (opcion != 0);
	
	cout << "\n--- RESULTADOS FINALES ---" << endl;
	if (totalValidas == 0) {
		cout << "No se ingresaron respuestas validas." << endl;
	} else {
		cout << "Total de respuestas validas: " << totalValidas << endl;
		cout << "Cantidad de respuestas 1: " << c1 << endl;
		cout << "Cantidad de respuestas 2: " << c2 << endl;
		cout << "Cantidad de respuestas 3: " << c3 << endl;
		cout << "Cantidad de respuestas 4: " << c4 << endl;
	}
	
	return 0;
}
