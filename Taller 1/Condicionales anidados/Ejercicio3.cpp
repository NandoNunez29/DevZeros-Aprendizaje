// Online C++ compiler to run C++ program online

/*Escribe un pseudocódigo que pida al usuario su 
salario mensual y determine el monto de impuestos 
que debe pagar. Si el salario es menor a $10,000, 
no debe pagar impuestos. Si es mayor o igual a $10,000 
pero menor a $20,000, debe pagar el 5% de impuestos. 
Si es mayor o igual a $20,000 pero menor a $30,000, 
debe pagar el 10% de impuestos. Si es mayor o igual a 
$30,000, debe pagar el 15% de impuestos*/


#include <iostream>
using namespace std;

    int main() {
        float Salario;
        float Impuesto;
       
        cout << "Ingrese Salario del empleado: " << endl;
        cin >> Salario;
        
        if (Salario >= 10000){
            if (Salario < 20000){
                Impuesto = Salario*0.05;
                cout << "El monto a pagar por concepto de Impuestos es: " << Impuesto << endl;
            }
            else if (Salario < 30000){
                Impuesto = Salario*0.1;
                cout << "El monto a pagar por concepto de Impuestos es: " << Impuesto << endl;
            }
            else {
                Impuesto = Salario*0.15;
                cout << "El monto a pagar por concepto de Impuestos es: " << Salario*0.15 << endl;
            }
        }
        else
            cout << "El empleado no paga impuestos." << endl;
        
        
    return 0;
}