#include <iostream>
#include <locale.h>

using namespace std;

int main() {
    int op, precio, cant, decision, preuni, precio1, total, op2, op3;
    char nombre[150], hora[50], tratamiento[150], descripcion[500], hombre = 'El', mujer = 'La', decision1[2];

    setlocale(LC_ALL, "");
    do {
        cout << "Bienvenido, ¿qué desea hacer?" << endl;
        cout << "1.-Agendar cita" << endl;
        cout << "2.-Modificar cita" << endl;
        cout << "3.-Eliminar cita" << endl;
        cout << "4.-Lista de citas vigentes" << endl;
        cout << "5.-Limpiar pantalla" << endl;
        cout << "6.-Salir" << endl;
        cin >> op;
        switch (op) {

        case 1:

            cout << "Ingresa el nombre del paciente" << endl;
            cin >> nombre;
            cout << "Ingrese la hora del tratamiento (hora de 24 horas)" << endl;
            cin >> hora;
            cout << "Ingrese el nombre del tratamiento" << endl;
            cin >> tratamiento;
            cout << "Ingrese la descripcion del tratamiento" << endl;
            cin >> descripcion;
            cout << "Ingresa el precio unitario del tratamiento" << endl;
            cin >> precio;
            cout << "Ingresa la cantidad del tratamiento" << endl;
            cin >> cant;
            cout << "Ingresa el precio unitario" << endl;
            cin >> preuni;
            precio1 = precio * cant;
            total = precio1 + preuni;

            cout << "Ingrese un número mayor 1 si el paciente es hombre y si es mujer un número menor" << endl;
            cin >> op2;
            if (op2 > 1) {

                cout << hombre << " paciente " << nombre << " tiene a las " << hora<<":" << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "La cantidad del tratamiento es " << cant << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            else {
                cout << mujer << " paciente " << nombre << " tiene a las " << hora << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "La cantidad del tratamiento es " << cant << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            break;

        case 2:
            cout << "Ingresa el nombre del paciente" << endl;
            cin >> nombre;
            cout << "Ingrese la hora del tratamiento" << endl;
            cin >> hora;
            cout << "Ingrese el nombre del tratamiento" << endl;
            cin >> tratamiento;
            cout << "Ingrese la descripcion del tratamiento" << endl;
            cin >> descripcion;
            cout << "Ingresa el precio unitario del tratamiento" << endl;
            cin >> precio;
            cout << "Ingresa la cantidad del tratamiento" << endl;
            cin >> cant;
            cout << "Ingresa el precio unitario" << endl;
            cin >> preuni;
            precio1 = precio * cant;
            total = precio1 + preuni;

            cout << "Ingrese un número mayor 1 si el paciente es hombre y si es mujer un número menor" << endl;
            cin >> op2;
            if (op2 > 1) {

                cout << hombre << " paciente " << nombre << " tiene a las " << hora << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "La cantidad del tratamiento es " << cant << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            else {
                cout << mujer << " paciente " << nombre << " tiene a las " << hora << endl;
                cout << "Su tratamiento consiste en " << descripcion << endl;
                cout << "El " << tratamiento << " tiene un precio unitario de $" << precio << endl;
                cout << "La cantidad del tratamiento es " << cant << ", su precio unitario es de $" << preuni << " y el total es de $" << endl;
            }
            break;

        case 3:
            cout << "----Elimación de citas" << endl;
            cout << "¿Esta seguro que desea eliminar la cita" << endl;

            break;

        case 4:
            cout << "----Lista de cita de vigentes----" << endl;
            break;

        case 5:
            cout << "----Limpieza de pantalla----" << endl;
            break;

        case 6:
            cout << "¿Esta seguro que desea salir?" << endl;
            cin >> decision1;
            break;


        }
        cout << "Si desea volver al menú ingrese 1 y si desea salir ingrese cualquier número" << endl;
        cin >> decision;
    } while (decision == 1);
}
      