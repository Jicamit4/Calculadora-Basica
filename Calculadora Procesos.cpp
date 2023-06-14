#include <iostream>
using namespace std;

int main() {
    int opcion;
    float num1, num2;

    cout << "Calculadora" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Seleccione una opcion (1-4): ";
    cin >> opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    switch(opcion) {
        case 1:
            cout << "El resultado de la suma es: " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "El resultado de la resta es: " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "El resultado de la multiplicacion es: " << (num1 * num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "El resultado de la division es: " << (num1 / num2) << endl;
            else
                cout << "Error: No se puede dividir entre cero." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}

