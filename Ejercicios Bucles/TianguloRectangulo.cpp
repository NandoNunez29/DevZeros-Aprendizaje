
/*Escribir un programa que pida al usuario un número entero y muestre por
 * pantalla un triángulo rectángulo como el de más abajo, de altura el número introducido.*/

#include <iostream>
using namespace std;
int main() {
    int numero;

    cout << "Digite numero: " << endl;
    cin >> numero;

    for (int i=1; i<=numero; i++){
        for (int x=1;x<=i;x++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
