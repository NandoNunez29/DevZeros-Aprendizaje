// Online C++ compiler to run C++ program online
/* 
El equipo de baloncesto masculino de la institución educativa el carmelo abre sus convocatorias para realizar el examen de admisión.
Los requisitos para poder ingresar son los siguientes: 
Ser estudiante de la institución, ser de género masculino, medir más de 1.5m de altura y ser menor de 17 años. 
Para agilizar el desarrollo de las actividades de inscripción la institución pide a la empresa DevZero realizar un software que permita el registro de los niños que quieran participar para el examen de admisión. 
Los datos de llenado del software serian los que se pidieron para la inscripción más los necesarios para pertenecer al equipo, si los datos de este software no coinciden con los del registro de alumnos, deberá enviar un mensaje el cual diga “Este estudiante no existe”
 En caso de que el estudiante sea apto el software deberá enviar un mensaje diciendo “inscrito” de lo contrario deberá enviar uno que diga “rechazado”

*/
#include <iostream>
using namespace std;

int main() {
       int alumnosMatriculados[6]={44556006,23451415,77094772,1065577425,78945123,55889966};
    char genero;
    int edad;
    float estatura;
    char op;
    int documento;
    cout << "CONVOCATORIA SELECCION MASCULINA DE BALONSENTO" << endl;
    cout << "Digite S para inscribirse.  Cualquier tecla para Terminar." << endl;
    cin >> op;
    op = toupper(op);
    
    while (op == 'S'){
        cout << "Digite su numero de documento: ";
        cin >> documento;
        bool noExiste=true;
        for(int i = 0; i < 6; i++){
            
            if (alumnosMatriculados[i] == documento){
              noExiste = false;  
               }
        }
        if (noExiste) {
            cout << "Este estudiante no existe." << endl;
        }
        else{
            cout << "Genero:  F --> Femenino  /   M  --> Masculino" << endl;
            cin >> genero;
            genero = toupper(genero);
            cout << "Estatura en metros:  " << endl;
            cin >> estatura;
            cout << "Edad: " << endl;
            cin >> edad;
            bool rechazado = true;
            if (genero=='F') rechazado=false;
            if (estatura < 1.5) rechazado=false;
            if (edad > 17) rechazado=false;
            if (!rechazado) {
                cout << "Rechazado" << endl;
            } else cout << "Inscrito" << endl;
        }
    cout << "S --> Para Realizar otra inscripción."  << endl;
    cout << "Cualquier tecla --> Para Terminar."  << endl;
    cin >> op;
    op = toupper(op);
    }
    
    cout << "Adios!";
    return 0;
}