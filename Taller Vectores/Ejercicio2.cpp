// Online C++ compiler to run C++ program online
/* Crear un programa que permita registrar la empresa AVIANCA S.A. ventas. por mes. 
El programa debe preguntar al usuario por las ventas de cada mes y almacenar esta información en un vector. 
Luego, el programa debe calcular y mostrar las ventas totales del año en la consola.


*/
#include <iostream>
using namespace std;

int main() {
    string mes;
    float ventas[12];
    float totalVentas;
    cout << "AVIANCA S.A."  << endl;
    cout << "A continuacion digite las ventas de cada mes: " << endl;
    for (int i; i <12; i++){
          switch(i+1){
                case 1: mes = "Enero";
                break;
                case 2: mes = "Febrero";
                break;
                case 3: mes = "Marzo";
                break;
                case 4: mes= "Abril";
                break;
                case 5: mes= "Mayo";
                break;
                case 6: mes = "Junio";
                break;
                case 7: mes= "Julio";
                break;
                case 8: mes= "Agosto";
                break;
                case 9: mes = "Septiembre";
                break;
                case 10: mes= "Octubre";
                break;
                case 11: mes= "Noviembre";
                break;
                case 12: mes= "Diciembre";
                break;
           }
       cout << mes << ":  $";
       cin >> ventas[i];
       totalVentas=totalVentas+ventas[i]; 
       }
    cout << "Las ventas totales del año fueron: $" << totalVentas;
        
    return 0;
}