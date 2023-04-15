
/*Escribir un programa que pregunte al usuario una cantidad a invertir, el
interés anual y el número de años, y muestre por pantalla el capital
 obtenido en la inversión cada año que dura la inversión.*/

#include <iostream>
using namespace std;
int main() {
    float Capital, interes;
    int anios;

    cout << "Digite la inversion que va a realizar: " << endl;
    cin >> Capital;
    cout << "Digite el interes a aplicar: " << endl;
    cin >> interes;
    cout << "Digite el numero de anios: " << endl;
    cin >> anios;

    for (int i=1; i<=anios; i++){
        Capital = Capital + (Capital*interes/100);
        cout << "Capital tras " << i << " anios: " << Capital << endl;

    }






    return 0;
}
