#include <iostream>
#include "dueno.h"
#include "cliente.h"
#include "delivery.h"

using namespace std;

int main() {
    int a,b,opcion;
    cin >>a;
    cin >>b;
    do {
       
        cout << "Seleccione la operación a realizar:" << endl;
        cout << "1. Dueio (+)" << endl;
        cout << "2. Cliente (-)" << endl;
        cout << "3. Delivery (*)" << endl;
        cout << "4. Abandonar emulador" << endl;
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Duenio: " << dueno(a, b) << endl;
                break;
            case 2:
                cout << "Cliente: " << cliente(a, b) << endl;
                break;
            case 3:
                cout << "Delivery: " << delivery(a, b) << endl;
                break;
            case 4:
                cout << "Abandonando el emulador" << endl;
                break;
            default:
                cout << "Opcion no valida, intente nuevamente." << endl;
                break;
        }
    } while(opcion != 4);

    return 0;
}
