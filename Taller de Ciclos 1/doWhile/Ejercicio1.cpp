// Online C++ compiler to run C++ program online
/*   La empresa LEV desarrolla un sistema de logeo para sus usuarios el cual consiste en que no importa cuantas veces trastes de ingresar, esta jamás bloqueara tu cuenta de usuario o correo electrónico brindándote una mejor seguridad.
Para ello se desarrolla una prueba piloto con el usuario Lord3van cuya contraseña es Nikki69 los desarrolladores que participan en el proyecto deberán crear un software que le permita ingresar únicamente si los caracteres tanto del usuario como de su contraseña sean iguales de lo contrario se enviará un mensaje diciendo “usuario o contraseña incorrecta”.


*/
#include <iostream>
using namespace std;

int main() {
    string usuario = "Lord3van";
    string clave = "Nikki69";
    string usuarioIngresado;
    string claveIngresada;
    
    bool op=true;
    
    do {
        cout << endl;
        cout << " B I E N V E N I D O   A    L E V" << endl;
        cout << "Usuario: ";
        cin >> usuarioIngresado;
        cout << "Contraseña: ";
        cin >> claveIngresada;
        if (usuarioIngresado == usuario && claveIngresada == clave){
            cout << "Felicidades, haz ingresado corectamente al sofware que aun no hace nada ;)." << endl;
            op = false;
        } else {
            cout << "usuario o contraseña incorrecta." << endl;
            op = true;
        }
            
        
    }while (op);
    return 0;
}