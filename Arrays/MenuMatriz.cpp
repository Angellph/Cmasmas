#include <iostream>
#define SIZE 100
using namespace std;
int main() {
    int n, m, r, act, e, ma[SIZE][SIZE];
    do {
        cout<<"==========Menu de operaciones==========\n";
        cout<<"1. Escritura.\n";
        cout<<"2. Lectura.\n";
        cout<<"3. Actualizar.\n";
        cout<<"4. Salir.\n";
        cout<<"Elige: ";
        cin>>r;
        switch (r) {
        case 1:
            cout<<"- Insertar datos -"<<endl;
            cout<<"Cuantas filas piensas usar?"<<endl;
            cin>>n;
            cout<<"Cuantas columnas piensas usar?"<<endl;
            cin>>m;
            for (int f = 1; f <= n; f++) {
                for (int c = 1; c <= m; c++) {
                    cout<<"Introduzca un numero en la fila "<<f<<" columna "<<c<<endl;
                    cin>>ma[f - 1][c - 1];
                }
            }
            break;
        case 2:
            cout<<"- Mostrar datos -"<<endl;
            for (int f = 1; f <= n; f++) {
                for (int c = 1; c <= m; c++) {
                    cout<<ma[f - 1][c - 1]<<" ";
                }
                cout<<""<<endl;
            } 
            break;
        case 3:
            cout<<"- Actualizar datos -"<<endl;
			cout<<"Introduzca el valor a actualizar"<<endl;
			cin>>act;
            for (int f = 1; f<= n; f++) {
                for (int c = 1; c <= m; c++) {
                    if (act == ma[f - 1][c - 1]) {
                        cout<<"Valor encontrado"<<endl;
                        cout<<"El valor es: "<<ma[f - 1][c - 1]<<endl;
						cout<<"Ingrese el nuevo valor: "<<endl;
						cin>>ma[f - 1][c - 1];
                        e = 1;
                    }
                }
            }
            if (e == 0) {
				cout<<"Valor no encontrado"<<endl;
			}
            break;
        case 4:
            cout<<"- Saliendo del programa -"<<endl;
            break;
        default:
            cout<<"Oups! No se ha encontrado esa operacion"<<endl;
            break;
        }
    } while (r != 4);
    return 0;
}