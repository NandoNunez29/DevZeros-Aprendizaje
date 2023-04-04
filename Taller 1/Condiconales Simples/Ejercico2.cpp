// Online C++ compiler to run C++ program online

/*Escribe un pseudocódigo que pida al usuario una 
calificación numérica (del 0 al 10) y, si es mayor 
o igual a 6, imprima en la pantalla "Aprobaste el examen". 
En caso contrario, imprima en la pantalla 
"Reprobaste el examen".*/



#include <iostream>
using namespace std;

int main() {
   int edad;
   
   cout << "DIgita tu edad: " << endl;
   cin>> edad;
   
   if (edad >= 18) 
        cout << "Eres Mayor de edad.";
    
  

    return 0;
}