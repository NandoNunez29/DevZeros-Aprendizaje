#include <iostream>
using namespace std;

string concatenar(string nombre, string apellido, int edad){
    string nombreCompleto = nombre + " " + apellido + "--- Edad: " + to_string(edad);
    return nombreCompleto;
}


int main() {
    cout << concatenar("Nando", "NUNEZ ", 25) << endl;
    return 0;
}

