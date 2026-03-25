#include <iostream>
using namespace std;

// Creador: Kevin Andrés Rivas Velásquez
int main() {
    double monto, totalCompra = 0, promedio;
    int cantidadCompras = 0, mayores100 = 0, menores100 = 0;

    cout << "--- Sistema de Compras (C++) ---" << endl;
    cout << "Creado por: Kevin Andres Rivas Velasquez" << endl;
    cout << "Ingrese montos de compra (0 para finalizar):" << endl;

    while (true) {
        cout << "Ingrese monto Q.: ";
        cin >> monto;

        if (monto == 0) {
            break; // Finalizar compra quetzales
        } else if (monto < 0) {
            cout << "Monto invalido, intentelo nuevamente." << endl;
        } else {
            // Procesar compra valida
            totalCompra += monto;
            cantidadCompras++;
            
            if (monto > 100) {
                mayores100++;
            } else {
                menores100++;
            }
        }
    }

    cout << "\n--- Resumen de Compra ---" << endl;
    if (cantidadCompras > 0) {
        promedio = totalCompra / cantidadCompras;
        cout << "Total de compra acumulada: Q." << totalCompra << endl;
        cout << "Cantidad de compras ingresadas: " << cantidadCompras << endl;
        cout << "Promedio de compras: Q." << promedio << endl;
        cout << "Compras mayores a 100: " << mayores100 << endl;
        cout << "Compras menores o iguales a 100: " << menores100 << endl;
    } else {
        cout << "No se ingresaron compras validas." << endl;
    }

    return 0;
}
