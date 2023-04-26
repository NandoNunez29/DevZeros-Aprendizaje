// Online C++ compiler to run C++ program online
/* Creación de un programa que permite registrar las horas de trabajo de la empresa ÉXITO S.A. empleados. 
El programa debe pedir al usuario que introduzca el número de empleados y sus horas de trabajo.
 Luego, el programa debe almacenar esta información en un vector y calcular el total de horas trabajadas y el promedio de horas trabajadas para cada empleado.


*/
#include <iostream>
using namespace std;

int main() {
    int numEmpleados;
    int totalHoras=0;
    
    cout << "EXITO S.A.  -  Empleados"  << endl;
    cout << "Digite numero de Empleados: ";
    cin >> numEmpleados;
    int horasTrabajo[numEmpleados];
    
    for( int i = 0; i < numEmpleados;i++){
        cout << "Digite numero de horas trabajadas del empleado " << i+1 << " : ";
        cin >> horasTrabajo[i];
        totalHoras = totalHoras+horasTrabajo[i];
    }
    cout << "Total de Horas trabajadas: " << totalHoras  << endl;
    cout << "El promedio de Horas Trabajadas Por Cada Empleado es de:  "  <<  (float)totalHoras/numEmpleados << endl;
    
    
        
    return 0;
}