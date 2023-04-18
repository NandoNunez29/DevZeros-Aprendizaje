// Online C++ compiler to run C++ program online
//Buscar un numero en un array y decir en que posicion está
#include <iostream>
using namespace std;

int main() {
    /*int t;
    cout << "Digite La Longitud del Array: " ;
    cin >> t;*/
    int num;
    int Numeros[5];
    Numeros[0]=8;
    Numeros[1]=4;
    Numeros[2]=9;
    Numeros[3]=7;
    Numeros[4]=45;
    int guia=0;
    cout << "Digite numero a buscar: " << endl;
    cin >> num;
    
    for (int i=0; i < 5;i++){
        if (num == Numeros[i]){
            cout << "El numero " << num << " esta en la posicion " << i << endl;
            guia=1;
        }
    }
    
    if (guia==0)
        cout << "El numero " << num << " No se encuentra en este Array."<< endl;
    
    
    return 0;
}