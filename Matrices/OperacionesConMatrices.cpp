// Online C++ compiler to run C++ program online

/*OPERACIONES CON MATRICES.*/

#include <iostream>
#include <cmath>
//#include <Eigen/Dense>

using namespace std;

int main() {
  // Eigen::Matrix3f matriz1;
    int x,y;
    bool seguir = false;
    do{
        cout << "OPERACIONES CON DOS MATRICES " << endl;
        cout << "Digita Numero de Filas: ";
        cin >> y;
        cout << "Digita Numero de Columnas: ";
        cin >> x;
        int matriz1[y][x];
        int matriz2[y][x];
        int matrizAux[y][x];
        
        int operacion;
        char continuar;
        
        cout << "INGRESE LOS VALORES DE LA MATRIZ 1:" << endl;
        for (int i = 0; i < y; i++){
            for(int a = 0; a < x; a++){
                cout << "Digita valor en la posicion " << i << ", " << a << ": ";
                cin >> matriz1[i][a];
            }
        }
        for (int i = 0; i < y; i++){
            for(int a = 0; a < x; a++){
                cout <<  matriz1[i][a] << " ";
            }
            cout << endl;
        }
        cout << "INGRESE LOS VALORES DE LA MATRIZ 2:" << endl;
        for (int i = 0; i < y; i++){
            for(int a = 0; a < x; a++){
                cout << "Digita valor en la posicion " << i << ", " << a << ": ";
                cin >> matriz2[i][a];
            }
        }
        for (int i = 0; i < y; i++){
            for(int a = 0; a < x; a++){
                cout <<  matriz2[i][a] << " ";
            }
            cout << endl;
        }
       do { 
        cout << "Elige la operación que deseas realizar con las dos matrices: " << endl;
        cout << "1. Suma de las dos Matrices." << endl;
        cout << "2. Resta de las dos Matrices." <<  endl;
        cout << "3. Multiplicación de las dos Matrices." << endl;
        cout << "4. Transponer la Matriz 1." << endl;
        cout << "5. Transponer la Matriz 2." << endl;
        cout << "6. Determinante de la Matriz 1." << endl;
        cout << "7. Ingresar Dos Matrices Diferentes" << endl;
        cout << "8. Salir." << endl;
        cin >> operacion;
        
        switch(operacion){
            case 1: 
                 cout << "La suma de las dos Matrices es: " << endl;
                 for (int i = 0; i < y; i++){
                    for(int a = 0; a < x; a++){
                        cout << matriz1[i][a] + matriz2[i][a] << "  ";
                    }
                    cout << endl;
                }
            break;
            case 2:
                 cout << "La Resta de las dos Matrices es: " << endl;
                 for (int i = 0; i < y; i++){
                    for(int a = 0; a < x; a++){
                        cout << matriz1[i][a] - matriz2[i][a] << "  ";
                    }
                    cout << endl;
                }
            break; 
            case 3: 
                 cout << "El Producto de las dos Matrices es: " << endl;
                 for (int i = 0; i < y; i++){
                    for(int a = 0; a < x; a++){
                        cout << matriz1[i][a] * matriz2[i][a] << "  ";
                    }
                    cout << endl;
                }
            break;
            case 4: 
                cout << "La Matriz Transpuesta de la Matriz 1 es: " << endl;
                for (int i = 0; i < x; i++){
                    for(int a = 0; a < y; a++){
                        matrizAux[a][i] = matriz1[i][a];
                        cout << matriz1[a][i] << "  ";
                    }
                    cout << endl;
                }
            break;
            case 5: 
                cout << "La Transpuesta de la Matriz 2 es: " << endl;
                for (int i = 0; i < x; i++){
                    for(int a = 0; a < y; a++){
                        matrizAux[a][i] = matriz2[i][a];
                        cout << matriz2[a][i] << "  ";
                    }
                    cout << endl;
                }
            break;
            case 6: 
                if(x == y && x > 0){
                    cout << "El Determinante de la Matriz 1 es: " << endl;
                    if(x == 2){
                    cout << (matriz1[0][0] * matriz1[1][1]) - (matriz1[0][1]*matriz1[1][0]) << endl;
                    } else {
                        cout << "Todavia no estamos preparados para calcular determinantes de matriz 3x3 o más" << endl;
                       /* float det = matriz1.determinant(); // calcular la determinante
                        cout << det << endl;*/
                        }
                    } else cout << "Solo se puede hayar el valor de la determinante en una matriz cuadrada." << endl;
            break;
            case 7:  seguir = true; 
            break;
            case 8: seguir = true; 
            break;
        }
        if(!seguir){
            cout << "Desea realizar otra Operacion? " << endl;
            cout << "Si --> S   /  No -->  Cualquier Tecla.";
            cin >> continuar;
            continuar = toupper(continuar);
         }
        } while (continuar == 'S');
    } while (seguir);
    
    cout << "Adios!";
    
    return 0;
}