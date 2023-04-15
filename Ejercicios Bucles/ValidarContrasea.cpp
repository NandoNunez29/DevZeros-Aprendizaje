
/*Escribir un programa que almacene la cadena de caracteres
 * contraseña en una variable, pregunte al usuario
 * por la contraseña hasta que introduzca la contraseña correcta.*/

#include <iostream>
using namespace std;
int main() {
    string contra;
    string cadena;
    cadena = "abc";
    do{
        cout << "Digite contraseña correcta: " << endl;
        cin >> contra;
    }while ( cadena != contra);
    cout << "Contraseña correcta..." << endl;

    return 0;
}