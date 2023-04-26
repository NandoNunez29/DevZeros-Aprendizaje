// Online C++ compiler to run C++ program online
/* 
La institución educativa El Carmelo desea un software el cual le permita el registro de sus alumnos a la institución, dicho software debe pedirle al usuario que registre al estudiante y para ello debe tomar los siguientes datos: +Nombre, +Apellidos, +ID, +edad, +género, +nombre del acudiente, +apellido del acudiente e ID del acudiente.
El software deberá tener en cuenta que el colegio solo posee 200 cupos.
Esta información deberá ser almacenada para poder llevar registro.
*/
#include <iostream>
using namespace std;

int main() {
    int n=2;
    string nombre[n], apellido[n], id[n], nombreAcudiente[n], apellidoAcudiente[n], idAcudiente[n];
    int edad[n], nel=0;
    char genero[n], op;
    cout << "Digite la letra S para inscribir un nuevo estudiante y cualquier tecla para finalizar." << endl;
    cin >> op;
    op=toupper(op);
    
    while(op=='S' && nel< n){
        cout << "NOMBRE: "; 
        cin >> nombre[nel];cout << endl;
        cout << "APELLIDO: ";
        cin >> apellido[nel];cout << endl;
        cout << "NUMERO DOCUMENTO: ";
        cin >> id[nel];cout << endl;
        cout << "EDAD: ";
        cin >> edad[nel];cout << endl;
        cout << "GENERO: M -> Masculino / F -> Femenino. ";
        cin >> genero[nel];cout << endl;
        cout << "NOMBRE DEL ACUDIENTE: " ;
        cin >> nombreAcudiente[nel];cout << endl;
        cout << "APELLIDO DEL ACUDIENTE: " ;
        cin >> apellidoAcudiente[nel];cout << endl;
         cout << "DOCUMENTO DEL ACUDIENTE: " ;
        cin >> idAcudiente[nel];
        nel++;
        cout << endl;
        cout << "Continuar -> S  /  Finalizar ->Cualquier tecla. " ;
        cin >> op;
        op=toupper(op);
    }
 cout << "Inscripcion finalizada.";
    return 0;
}