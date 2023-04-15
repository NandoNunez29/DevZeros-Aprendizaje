
/*Escribir un programa que almacene la cadena de caracteres
 * contraseña en una variable, pregunte al usuario
 * por la contraseña hasta que introduzca la contraseña correcta.*/

#include <iostream>
using namespace std;
int main() {
    string contra;
    int i =1;

do {
    cout << "Digite contraseña correcta: " << endl;
    cin >> contra;
    i++;
    }while ( i<=3);
    return 0;
}