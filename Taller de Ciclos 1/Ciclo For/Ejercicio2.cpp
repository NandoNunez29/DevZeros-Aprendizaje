// Online C++ compiler to run C++ program online

/*1.   La clínica Santa Isabel en su cuarta jornada de vacunación contra el COVID-19 desea inmunizar a su personal en primera instancia. Pero debido a su alta cantidad de personal requiere que estos se vacunen por días dependiendo en cuanto termina su número de identificación. 
Para esto requiere un software el cual identifica a quienes les corresponde en el respectivo día. 
Para poder ser vacunado, el último dígito del número de identificación debe ser igual a la unidad del día en cuestión.
// Online C++ compiler to run C++ program online
/*  La empresa de apuestas SA desea conocer el promedio de satisfacción de sus clientes en el corregimiento de Guacoche por sus servicios prestados, para ello realiza un sistema de muestreo en donde se deben entrevistar a 50 personas preguntándole su nivel de satisfacción en dónde.

Cero está muy insatisfecho.
Uno está insatisfecho. 
Dos está satisfecho. 
Tres está  muy satisfecho. 

Al final de la entrevista a las 50 personas el software debe mostrar los porcentajes de cada nivel de satisfacción, y un mensaje diciendo el grado de satisfacción global teniendo en cuenta el valor del promedio. 
Datos: los datos deberán ser llenados manualmente, se redondeará hacia el mayor el promedio global en caso de que como resultado se obtenga un número decimal.*/
#include <iostream>
using namespace std;

int main() {
    int n=5;
    float encuesta[n];
    float insatisfecho=0, satisfecho=0, muySatisfecho=0, muyInsatisfecho=0;
    cout << "A P U E S T A S    S A." << endl;
    cout << "ENCUESTA DE SATISFACCION." << endl;
    cout << endl;
    cout << "Califique los servicios prestados por nuestra empresa: " << endl;
        cout << "0. Muy Insatisfecho." << endl;
        cout << "1. Insatisfecho." << endl;
        cout << "2. Satisfecho." << endl;
        cout << "3. Muy Satisfecho" << endl;
    for(int i=0; i < n; i++){
        bool op;
       do{ 
            op=true;
            cout << "Cliente numero " << i <<" : ";
            cin >> encuesta[i];
            switch ((int)encuesta[i])
                {
                case 0: muyInsatisfecho++;
                break;
                case 1: insatisfecho++;
                break;
                case 2: satisfecho++;
                break;
                case 3: muySatisfecho++;
                break;
                default : cout << "Valor Fuera de Rango" << endl;
                op=false;
                }
        }while(op==false);
    }

cout << "Porcentaje de clientes Muy Insatisfechos: " << muyInsatisfecho*100/n << "%" << endl;
cout << "Porcentaje de clientes Insatisfechos: " << insatisfecho*100/n << "%" << endl;
cout << "Porcentaje de clientes Satisfechos: " << satisfecho*100/n << "%" << endl;
cout << "Porcentaje de clientes Muy Satisfechos: " << muySatisfecho*100/n << "%" << endl;


    return 0;
}