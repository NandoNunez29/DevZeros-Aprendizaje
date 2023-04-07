// Online C++ compiler to run C++ program online

/* Calcular la suma de los números pares del 1 al 100.
*/
#include <iostream>
using namespace std;

int main() {
    int suma=0;
    
    for(int i=1;i<=100;i++){
        if( i%2 == 0 ){
            suma = suma + i;
           
        }
    }
    cout << "La suma de los numeros pares del 1 al 100 es: " << suma << endl;
    
    
    return 0;
}