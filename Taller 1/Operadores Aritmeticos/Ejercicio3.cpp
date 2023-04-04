// Online C++ compiler to run C++ program online

/* Escribe un pseudocódigo que pida al usuario el 
valor de un préstamo, el interés y el plazo en meses. 
Calcula el valor de las cuotas mensuales y muestre en 
pantalla.*/

#include <iostream>
using namespace std;

int main() {

    float ValorCredito;
    float Intereses;
    float Plazo;
    float ValorCuotas;
    
    cout << "Digita el valor del credito: $" << endl;
    cin >> ValorCredito;
    cout << "Digita el Interes a aplicar: " << endl;
    cin >> Intereses;
    cout << "Digita el plazo en meses: ";
    cin >> Plazo;
    
    ValorCuotas = (ValorCredito/Plazo)+ValorCredito*Intereses/100;
    cout << "Tendras que pagar " << Plazo <<"  de $" << ValorCuotas;
    
  

    return 0;
}