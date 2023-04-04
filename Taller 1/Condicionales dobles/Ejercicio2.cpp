// Online C++ compiler to run C++ program online

/*Escribe un pseudocódigo que pida al usuario el 
resultado de una operación matemática y determine 
si es correcto o incorrecto. Si el resultado es correcto, 
imprime en pantalla "El resultado es correcto". 
Si el resultado es incorrecto, imprime en pantalla 
"El resultado es incorrecto".*/


#include <iostream>
using namespace std;

    int main() {

        int edad;
        
        cout << "Digita tu edad: " << endl;
        cin >> edad;
        
        if (edad >= 18) {
            if (edad <= 65) {
                cout << "Eres un Adulto";
            }
            else 
                cout << "No eres un Adulto";
        }
        else 
            cout << "No eres un Adulto";
        
        
    return 0;
}