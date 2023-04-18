// Online C++ compiler to run C++ program online
//Pedir al usuario que ingrese nombres y gyardarlos en un array de string
#include <iostream>
using namespace std;

int main() {
    string Nombres[5];
    
   
   for (int i=0; i < 5;i++){
       cout << "Digita Nombre en la posicion: " << i << endl;
       cin >> Nombres[i];
   }
   for (int i=0; i < 5;i++){
       cout << "El Nombre en la posicion " << i << " es: " << Nombres[i] << endl;
       }
    
    return 0;
}