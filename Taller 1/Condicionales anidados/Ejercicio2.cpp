// Online C++ compiler to run C++ program online

/*Escribe un pseudocódigo que pida al usuario su edad 
y su género. Si el género es masculino y la edad es 
mayor o igual a 18 años, imprime en pantalla 
"Eres un hombre adulto". Si el género es femenino y 
la edad es mayor o igual a 18 años, imprime en pantalla 
"Eres una mujer adulta". Si la edad es menor a 18 años, 
imprime en pantalla "Eres menor de edad".*/


#include <iostream>
using namespace std;

    int main() {
        int edad;
        char genero;
        
        cout << "Digite su edad: " << endl;
        cin >> edad;
        cout << "Digite su genero (M ó F): " << endl;
        cin >> genero;
        genero = tolower(genero);
        
        
        if (edad >= 18){
            if (genero == 'm'){
                cout << "Eres un hombre adulto" << endl;
            }
            else
            if (genero == 'f'){
                cout << "Eres una mujer adulta" << endl;
            }
        }
        else
            cout << "Eres un menor de edad" << endl;
        
    return 0;
}