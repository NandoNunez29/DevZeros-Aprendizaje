// Online C++ compiler to run C++ program online
//Ordenar un array de numeros enteros de forma ascedente y descendente
#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Digite La Longitud del Array: " << endl;
    cin >> t;
    int Numeros[t];
    
    for (int i=0; i < t;i++){
       /* cout << t << endl;*/
    cout << "Digite Numero en la posicion " << i << endl;
    cin >> Numeros[i];
    }
    
    for (int x=0; x < t; x++){
        for(int i = x+1; i < t; i++){
            if(Numeros[x] > Numeros[i]) {
               int aux = Numeros[x];
               Numeros[x] = Numeros[i];
               Numeros[i]= aux;
            } 
        }
    }
    
    cout << endl << "Orden Ascendente: "  << endl << endl; 
    for (int i=0; i < t;i++){
    cout << "posicion " << i << ":  " << Numeros[i] << endl;
    }
    
   for (int x=0; x < t; x++){
        for(int i = x+1; i < t; i++){
            if(Numeros[x] < Numeros[i]) {
               int aux = Numeros[x];
               Numeros[x] = Numeros[i];
               Numeros[i]= aux;
            } 
        }
    }
    
    cout << endl << "Orden Descendente: "  << endl << endl; 
    for (int i=0; i < t;i++){
    cout << "posicion " << i << ":  " << Numeros[i] << endl;
    }
    return 0;
}