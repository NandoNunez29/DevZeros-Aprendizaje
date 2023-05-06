#include <iostream>
using namespace std;

string concatenar(){
    int edad;
    string nombre;
    string apellido;
    cout << "digite la edad" << endl;
    cin >> edad;
    cout << "digite la nombre" << endl;
    cin >> nombre;
    cout << "digite la apellido" << endl;
    cin >> apellido;
    string nombres = nombre + " " + apellido + " " + to_string(edad);
    return nombres;
}

int main() {
    cout << concatenar() << endl;
    return 0;
}