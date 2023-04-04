// Online C++ compiler to run C++ program online

/*Escribe un pseudocódigo que pida al usuario dos 
números enteros y determine cuál de ellos es mayor. 
Si el primer número es mayor, imprime en pantalla 
"El primer número es mayor". 
Si el segundo número es mayor, imprime en pantalla 
"El segundo número es mayor". Si ambos números son iguales, 
imprime en pantalla "Los dos números son iguales".*/


#include <iostream>
using namespace std;

  int main() {

    int numero1;
    int numero2;
    
    cout << "Digite el Primero Numero: " << endl;
    cin >> numero1;
    cout << "Digita el Segundo Numero: " << endl;
    cin >> numero2;
    
    if (numero1 > numero2)
        cout << "El Primer Numero es Mayor.";
    else 
        if (numero1 < numero2)
            cout << "El Segundo Numero es Mayor.";
        else
            cout <<"Los dos numeros son iguales.";
            
    return 0;
}