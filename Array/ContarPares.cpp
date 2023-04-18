// Online C++ compiler to run C++ program online
//Contar la cantidad de elementos pares del array
#include <iostream>
using namespace std;

int main() {
    int t;
    int par=0;
    cout << "Digite el tamaño del array: ";
    cin >> t;
    int array[t];
    
   for (int i=0; i < t;i++){
       cout << "Digita Numero en la posicion: " << i << endl;
       cin >> array[i];
   }
   for (int i=0; i < t;i++){
       if (array[i]%2 == 0){
          par++;
       }    
   }
    
    cout << "En el array hay " << par << " numeros pares." << endl;
    return 0;
}