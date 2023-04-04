// Online C++ compiler to run C++ program online

/* Escribe un pseudocódigo que pida al usuario una 
letra y, si es una vocal, imprima en la pantalla 
"La letra es una vocal". En caso contrario, imprima 
en la pantalla "La letra es una consonante".*/


#include <iostream>
using namespace std;

int main() {
   char letra;
   
   cout<<"Escribe una letra por favor: " <<endl;
   cin>> letra;
   letra = tolower(letra);
   
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
       cout<< "La letra es una vocal." << endl;
   }
    else {
        cout << "La letra es una consonante." << endl;
    }

    return 0;
}