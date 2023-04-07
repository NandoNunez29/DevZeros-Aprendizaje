// Online C++ compiler to run C++ program online

/* Escriba un programa que pida dos números enteros y escriba qué números son pares y cuáles impares desde el primero hasta el segundo.
*/
#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    
    cout << "Digita Numero 1: " << endl;
    cin >> num1;
    cout << "Digita Numero 2: " << endl;
    cin >> num2;
    
    for(int i = num1; i <= num2;i++) {
        if(i%2 == 0){
            cout << i << " ES NUMERO PAR" << endl;
        }
        else 
            cout << i << " ES NUMERO IMPAR" << endl;
    }
    
    
    return 0;
}