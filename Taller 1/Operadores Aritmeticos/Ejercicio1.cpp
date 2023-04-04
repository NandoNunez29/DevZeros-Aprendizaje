

/*Escribe un pseudocódigo que pida al usuario
el valor de un producto y el porcentaje de 
descuento que se aplicará sobre él. Calcula 
el precio final con el descuento y muéstralo en pantalla.*/

#include <iostream>
using namespace std;

int main() {

    float ValorProducto;
    float Descuento;
    float PrecioFinal;
    
    cout << "Digita el valor del producto: " << endl;
    cin >> ValorProducto;
    cout << "Digita el descuento a aplicar: " << endl;
    cin >> Descuento;
    
    PrecioFinal = ValorProducto - (ValorProducto*Descuento/100);
    cout << "EL valor a pagar incluyendo el descuento es de: $" << PrecioFinal;

    return 0;
}