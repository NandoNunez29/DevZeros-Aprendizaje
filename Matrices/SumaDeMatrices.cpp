/*Suma de matrices
Solicita al usuario dos matrices y muestra la matriz resultante de la suma de ambas.*/
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "SUMA DE DOS MATRICES " << endl;
    cout << "Digita Numero de Filas: ";
    cin >> y;
    cout << "Digita Numero de Columnas: ";
    cin >> x;
    
    int matriz1[y][x];
    int matriz2[y][x];
    
    cout << "INGRESE LOS VALORES DE LA MATRIZ 1:" << endl;
    for (int i = 0; i < y; i++){
        for(int a = 0; a < x; a++){
            cout << "Digita valor en la posicion " << i << ", " << a << ": ";
            cin >> matriz1[i][a];
        }
    }
    
    cout << "INGRESE LOS VALORES DE LA MATRIZ 2:" << endl;
    for (int i = 0; i < y; i++){
        for(int a = 0; a < x; a++){
            cout << "Digita valor en la posicion " << i << ", " << a << ": ";
            cin >> matriz2[i][a];
        }
    }

    cout << "La suma de las dos Matrices son: " << endl;
    for (int i = 0; i < y; i++){
        for(int a = 0; a < x; a++){
            cout << matriz1[i][a] + matriz2[i][a] << "  ";
            
        }
        cout << endl;
    }
    return 0;
}