// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	float salario;
    float valoracion;
    int op=0;

    do {
        cout << "Digite valoracion: " << endl;
        cin >> valoracion;

        if (valoracion == (float) 0.0) {
            cout << "Valoracion inaceptable no tienes derecho a ningun pago." << endl;
            op=1;
        } else if (valoracion == (float) 0.4) {
            salario = valoracion * 2400;
            cout << "Valoracion Aceptable, tienes derecho a un pago de: " << salario << endl;
            op=1;
        } else if (valoracion == (float) 0.6) {
            salario = valoracion * 2400;
            cout << "Valoracion Meritoria, tienes derecho a un pago de: " << salario << endl;
            op=1;
        } else {
            cout << "Valor incorrecto, intentalo de nuevo." << endl;
        }
    }while(op==0);
	return 0;
}

