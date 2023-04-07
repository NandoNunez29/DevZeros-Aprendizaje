// Online C++ compiler to run C++ program online

/* Escriba un programa que pida un número entero mayor que cero y que escriba sus divisores.
*/
#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Digite numero entero mayor que cero: " << endl;
    cin >> numero;
    
    if (numero != 0) {
        cout << "Los divisores de " << numero << " son: " << endl;
        for (int i=1;i<=numero;i++){
            if(numero%i == 0){
                cout << i << endl;
            }
        }
    }
    else {
        cout << "El numero no puede ser cero: " << endl;
    }
    
    
    
    
    return 0;
}