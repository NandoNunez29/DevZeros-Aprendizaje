// Online C++ compiler to run C++ program online
//Invertir un Array
#include <iostream>
using namespace std;

int main() {
    
    int Numeros[5];
    int ArrayInvertido[5];
    Numeros[0]=8;
    Numeros[1]=4;
    Numeros[2]=9;
    Numeros[3]=7;
    Numeros[4]=45;
    
    int y = 0;
    
    //Recorremos el array Original desde la ultima posicion hasta la primera para asugnarle valores al array nuevo.
    for (int i=4; i >= 0;i--){
        ArrayInvertido[y] = Numeros[i];
        y++;
    }
    
    //Recorremos el array nuevo para mostrar el resultado
    cout << "Array Invertido: " << endl;
    for (int i =0; i<5;i++){
        cout << ArrayInvertido[i] << endl;
        
    }
   
    return 0;
}