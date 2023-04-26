
/*   Maria aburrida a causa de falta de internet y libros para leer decide desarrollar un juego en su computadora el cual consiste en generar un número aleatorio entre el 1 y el 20 y tratar de adivinarlo.
 La dificultad consiste en que por cada intento que realice y falle este juego le enviará un mensaje diciendo “mala suerte” y al siguiente intento el número cambiará de valor pero conservará sus parámetros, el juego termina cuando Maria  adivina el número o falla 11 intentos. 
Notas: Al terminar el juego debe enviar un mensaje diciendo “Game Over”

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int numeroAleatorio;
    int numeroMaria;
    int intentos=1;
    
    do{
        numeroAleatorio = rand()%21;
        cout << "Adivina el numero **" << endl;
        cin >> numeroMaria;
        if(numeroMaria == numeroAleatorio){
            cout << "Felicidades, haz logrado adivinar el numero aleatorio." << endl;
            cout<< "El numero aleatorio era:  "  << numeroAleatorio << endl;
        } else {
            cout << "mala suerte" << endl;
            intentos++;
            cout<< "El numero aleatorio era:  "  << numeroAleatorio << endl;
            }
        
        }while(intentos <= 11);
        if (intentos >= 11) cout << "GAME OVER" << endl;
        
    return 0;
}