// Online C++ compiler to run C++ program online
//Sumar los elementos de dos array de la misma longitud y mostrar en pantalla
#include <iostream>
using namespace std;

int main() {
    int Array2[5];
    int Array1[5];
    int suma[5];
    
    Array1[0]=8;
    Array1[1]=4;
    Array1[2]=9;
    Array1[3]=7;
    Array1[4]=45;
    
    Array2[0]=18;
    Array2[1]=99;
    Array2[2]=4;
    Array2[3]=25;
    Array2[4]=74;

    //Recorremos los dos array con el mismo for y vamos guardando el resultado en el array suma
    for (int i=0; i < 5;i++){
        suma[i] = Array1[i] + Array2[i];
   }
   cout << "El array suma es: " << endl;
   for (int i=0; i < 5;i++){
        cout << suma[i]  << endl;
   }
    
    
    return 0;
}