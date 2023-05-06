#include <iostream>
using namespace std;

void concatenar(string nombre, string apellido, int edad){
    string nombres = nombre + " " + apellido + " " + to_string(edad);
    cout << nombres << endl;
}

int main() {
    int edad;
    string nombre;
    string apellido;
    cout << "digite la edad" << endl;
    cin >> edad;
    cout << "digite la nombre" << endl;
    cin >> nombre;
    cout << "digite la apellido" << endl;
    cin >> apellido;
    concatenar(nombre, apellido, edad);
    return 0;
}