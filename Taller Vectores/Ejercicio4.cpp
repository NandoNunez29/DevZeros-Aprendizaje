// Online C++ compiler to run C++ program online
/* Crea un programa que te permita registrar sueldos y cargos para BANCOLOMBIA S.A. empleados.
 El programa debe preguntar al usuario sobre el número de empleados, salarios y posición. 
Luego, el programa debe almacenar esta información en dos vectores diferentes y permitirle buscar y mostrar los salarios y puestos de los empleados.

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numEmpleados; // se declara variable para el numero de empleados.
    
    //Se captura numero de empleados para determinar el tamaño de los vectores
    cout << "B A N C O L O M B I A    S. A. " << endl;
    cout << "Digite Numero de Empleados: ";
    cin >> numEmpleados;
    
    // Se declaran los vectores con el numero de empleados capturados anteriormente.
    string posicion[numEmpleados];
    float salario[numEmpleados];
    
    float buscarSalario;
    string buscarPosicion;
    char seguir;
    bool existe;
    
    //Se usa el for para recorrer los vectores e ir capturando los valores correspondientes.
    for (int i = 0; i < numEmpleados; i++){
        cout << "Digite Cargo: ";
        cin >> posicion[i];
        cout << "Digite salario: $";
        cin >> salario[i];
    }
    
    //do while para darle la opcion al usuario seguir buscando segun el cargo.
    do{
        existe=false;
        cout << "Digite Cargo a buscar: ";
        cin >> buscarPosicion;
        for (int i = 0; i < numEmpleados; i++){
            if (buscarPosicion == posicion[i]){
                cout << "Cargo: " << posicion[i] << " --> ";
                cout << "Salario: "  << salario[i]  << "." << endl;
                existe=true;
            }
        }
    if (!existe) cout << "Cargo No existe." << endl;
    cout << "S --> Seguir Buscando   /  Cualquier Tecla --> Terminar." << endl;
    cin >> seguir;
    seguir=toupper(seguir);
    
    }while(seguir=='S');
    cout << "Adios!";
        
    return 0;
}