// Online C++ compiler to run C++ program online


/*Escribe un pseudocódigo que pida al usuario su edad y,
si es mayor de 18 años, imprima en la pantalla 
"Eres mayor de edad"*/

#include <iostream>
using namespace std;

  int main() {

    float Calificacion;
    
    cout << "Digita tu nota de 0 a 10: " << endl;
    cin >> Calificacion; 
    if (Calificacion >= 6)
        cout << "Aprobaste el Examen.";
    else
       cout << "Reprobaste el Examen."; 
    

    return 0;
}