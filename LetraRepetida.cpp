// Online C++ compiler to run C++ program online
/*programa que pide una frase y luego una letra
 * calcula cuantas veces se repite esa letra en la frase digitada.
 * */

#include <iostream>
using namespace std;

int main() {
    string palabra;
    char letra;
    int contador = 0;

        cout << "Introduce palabra: "  << endl;
        cin >> palabra;
        cout << "Ingresa letra: ";
        cin >> letra;

        for (int i = 0; i <= palabra.length();i++) {
            if(palabra[i] == letra)
                contador++;
        }
        cout << "la letra "<< letra << " aparece "  << contador << " veces" << endl;

    return 0;
}