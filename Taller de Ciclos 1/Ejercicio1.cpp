/*1.   La clínica Santa Isabel en su cuarta jornada de vacunación contra el COVID-19 desea inmunizar a su personal en primera instancia. Pero debido a su alta cantidad de personal requiere que estos se vacunen por días dependiendo en cuanto termina su número de identificación. 
Para esto requiere un software el cual identifica a quienes les corresponde en el respectivo día. 
Para poder ser vacunado, el último dígito del número de identificación debe ser igual a la unidad del día en cuestión.
Datos: para realizar este ejercicio deberá llenar un vector con 100 números de identificación y recuerde que ningún número puede ser repetido, también debe recordar que los números de identificación poseen de 8 a 11 dígitos.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
     int n=3;
     string identificacion[n];
     string cedula;
     int longitud;
     bool error;
    for (int i=0; i < n;i++){
        do{
            error=true;
            cout << "Digita Numero de identificacion en la posicion  "  << i << " : ";
            cin >> cedula;
            longitud = size(cedula);
            if (longitud < 8 || longitud > 11){
                cout << "Valor fuera de Rango, Intente de nuevo." << endl;
                error=false;
            }
            for(int x = 0; x < n ; x++){
              if ( identificacion[x] == cedula){
                cout << "Cedula ya existe." << endl;    
                error = false;
                }   
            }
        } while (error==false);
        identificacion[i]=cedula;
    } 
    for (int i= 0; i < n; i++){
        longitud = size(identificacion[i]);
        
        switch (identificacion[i][longitud-1]){
          case '1': cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Lunes." << endl;
          break;
          case '2': cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Martes." << endl;
          break;
          case '3': cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Miercoles." << endl;
          break;
          case '4': cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Jueves." << endl;
          break;
          case '5': cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Viernes." << endl;
          break;
          case '6': cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Sabado." << endl;
          break;
          default:  cout << "Al usuario con cedula  " << identificacion [i] << " le corresponde vacunarse el Domingo." << endl;
          break;
        }
    }
    return 0;
}