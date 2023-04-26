// Online C++ compiler to run C++ program online
/* Ejercicio 3
Cree un programa que le permita registrar la empresa ÉXITO S.A. los precios de los productos vendidos.
 El programa necesita solicitar al usuario el nombre y el precio del producto y almacenar esta información en dos vectores diferentes. 
Entonces el programa debe permitir buscar y visualizar los precios de los productos.


*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int maxProd=200;
    string nombreProd[maxProd];
    float precioProd[maxProd];
    int nel=0;
    char seguir;
    bool existe;
    string producto;
    
    cout << "E X I T O  S. A." << endl;
    cout << "Registro de Productos y Precios." << endl;
    cout <<"Cuantos productos va a ingresar?  ";
    cin >> nel;
    
    //for para registrar los datos correspondientes en los dos vectores creados.
    for (int i = 0; i < nel; i++){
        cout << "Nombre de Producto " << i+1 << ": ";
        cin >>  nombreProd[i];
        cout << "Precio: $";
        cin >> precioProd[i];
    }
     cout << "REGISTRO EXITOSO!" << endl;   
      
    // do while para buscar segun el nombre del producto
    do{
        existe = false;
        cout << "Digite el producto a buscar: ";
        cin >> producto;
        for (int i=0; i < nel; i++){
            if (producto == nombreProd[i]){
                cout << nombreProd[i] << " --> " << precioProd[i] << endl;
                existe = true;
            }
        }
        if (!existe) cout << "Producto no existe." << endl;
        cout << "S --> Buscar otro producto. / Cualquier tecla --> Terminar." << endl;
        cin >> seguir;
        seguir = toupper(seguir);
    }while(seguir == 'S');
    
    cout << "Adios!";
    return 0;
}