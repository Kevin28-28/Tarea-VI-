#include <iostream>

using namespace std;

int main() {
    // Variables iniciales
    float saldo = 500.0;
    float monto;
    int opcion;
    
    // Contadores y Acumuladores
    int transacciones = 0; 
    float totalDepositado = 0;
    float totalRetirado = 0;

    cout << "Creador: Kevin Andres Rivas Velasquez" << endl;
    cout << "---------------------------------------" << endl;

    do {
        // Mostrar menú repetitivamente
        cout << "\n--- CAJERO AUTOMATICO ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            // Consultar saldo
            cout << "Su saldo actual es: Q." << saldo << endl;
            transacciones++;
        } 
        else if (opcion == 2) {
            // Depositar dinero
            cout << "Saldo actual: Q." << saldo << endl;
            cout << "Ingrese el monto a depositar: Q.";
            cin >> monto;

            if (monto > 0) {
                saldo += monto; // Acumulador de saldo
                totalDepositado += monto; // Acumulador de depósitos
                transacciones++;
                cout << "Deposito exitoso. Saldo actualizado: Q." << saldo << endl;
            } else {
                cout << "Monto invalido." << endl;
            }
        } 
        else if (opcion == 3) {
            // Retirar dinero
            cout << "Saldo actual: Q." << saldo << endl;
            cout << "Ingrese el monto a retirar: Q.";
            cin >> monto;

            if (monto > saldo) {
                cout << "Fondos insuficientes" << endl;
            } else if (monto <= 0) {
                cout << "Monto invalido." << endl;
            } else {
                saldo -= monto; // Acumulador de saldo
                totalRetirado += monto; // Acumulador de retiros
                transacciones++;
                cout << "Retiro exitoso. Saldo actualizado: Q." << saldo << endl;
            }
        } 
        else if (opcion == 4) {
            cout << "Saliendo del sistema. Gracias por su preferencia." << endl;
        } 
        else {
            // Operación inválida
            cout << "Operacion invalida" << endl;
        }

    } while (opcion != 4); // El programa se repite hasta que el usuario marque 4

    // Resumen final usando los contadores y acumuladores
    cout << "\n--- RESUMEN DE SESION ---" << endl;
    cout << "Total de operaciones realizadas: " << transacciones << endl;
    cout << "Saldo final: Q." << saldo << endl;

    return 0;
}
