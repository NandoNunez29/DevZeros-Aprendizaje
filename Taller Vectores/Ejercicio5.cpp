// Online C++ compiler to run C++ program online
/* Ejercicio 3
Crea un programa que permita registrar las notas de los estudiantes de DEVZERO. 
El programa debe solicitar al usuario el número de estudiantes y sus notas. Luego, el programa debe almacenar esta información en un vector y calcular el promedio de notas. 
Finalmente, el programa debe mostrar este resultado en la consola.

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numEstudiantes;
    cout << "BIENVENIDO A DEVZERO" << endl;
    cout <<"Digite numero de estudiantes: ";
    cin >> numEstudiantes;
    float notas[numEstudiantes];
    float suma=0;
    
    
    for(int i= 0; i< numEstudiantes; i++){
        cout << "Nota: ";
        cin >> notas[i];
        suma=suma+notas[i];
    }
    
    cout << "El promedio de notas es : " << suma/numEstudiantes;
    return 0;
}