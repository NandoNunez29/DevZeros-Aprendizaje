// Online C++ compiler to run C++ program online

/*Escribe un pseudocódigo que pida al usuario el
valor de un producto y el impuesto que se aplicará 
sobre él. Calcula el precio final con el impuesto y 
muéstralo en pantalla.*/


#include <iostream>
using namespace std;

int main() {
    float ValorProducto;
    float Impuesto;
    float PrecioFinal;
    
    cout << "Digita el valor del producto: " << endl;
    cin >> ValorProducto;
    cout << "Digita el Impuesto a aplicar: " << endl;
    cin >> Impuesto;
    
    PrecioFinal = ValorProducto + (ValorProducto*Impuesto/100);
    cout << "EL valor a pagar incluyendo el Impuesto es de: $" << PrecioFinal;

    return 0;
}