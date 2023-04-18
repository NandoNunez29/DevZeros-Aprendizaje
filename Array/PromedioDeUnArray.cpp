// Online C++ compiler to run C++ program online
//Ordenar un array de numeros enteros de forma ascedente y descendente
#include <iostream>
using namespace std;

int main() {
    int t;
    float suma=0;
    cout << "Digite La Longitud del Array: " ;
    cin >> t;
    int Numeros[t];
    
    for (int i=0; i < t;i++){
        cout << "Digite Numero en la posicion " << i << endl;
        cin >> Numeros[i];
        suma = suma + Numeros[i];
    }
    
    cout << endl << "La Media aritmetica de los elementos del array es: "  << suma/t << endl; 
    
    return 0;
}