// Online C++ compiler to run C++ program online

/* Escriba un programa que pida un número entero mayor que cero y que escriba sus divisores.
*/
#include <iostream>
using namespace std;

int main() {
    int numero;
    int factorial = 1;
    
    cout << "Digite numero entero mayor que cero: " << endl;
    cin >> numero;
    
    for (int i = 1; i <= numero; i++){
        factorial = factorial * i;
    }
    cout << "Factorial de " << numero <<" es: " << factorial;
    
    return 0;
}