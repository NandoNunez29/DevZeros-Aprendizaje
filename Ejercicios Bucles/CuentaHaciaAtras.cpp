/*Escribir un programa que pida al usuario un
 * número entero positivo y muestre por pantalla
 * la cuenta atrás desde ese número hasta cero separados por comas.*/

#include <iostream>

using namespace std;
int main() {
   int numero;

   cout << "Digite el numero" << endl;
   cin >> numero;

   for (int i = numero; i >= 0;i-- ){
       cout << i << " , ";
   }

    return 0;
}
