#include <iostream>
using namespace std;

int main() {
     int  r, contV, act, e, eli, x, au, t, ar[50];
     do {
          cout<<"-----------MENU DE OPCIONES-----------\n";
          cout<<"1. Escritura\n";
          cout<<"2. Lectura\n";
          cout<<"3. Actualizacion\n";
          cout<<"4. Eliminacion\n";
          cout<<"5. Salir\n";
          cout<<"Elige: \n";
          cin>>r;

          switch (r) {
          case 1:
               cout<<"- Insertar datos -"<<endl;
               cout<<"Introduzca un valor del arreglo: "<<contV<<endl;
               cin>>ar[contV - 1];
               contV ++;
               break;
          case 2:
               cout<<"- Mostrar datos -"<<endl;
               for (int i = 1; i <= contV - 1; i++) {
                    cout<<"Arreglo: "<<i<<" es: "<<ar[i - 1]<<endl;
               }
               break;
          case 3:
               cout<<"- Actualizar datos -"<<endl;
			cout<<"Introduzca el valor a actualizar"<<endl;
			cin>>act;
			for (int i = 1; i <= contV - 1; i++) {
				if (act == ar[ i- 1]) {
					cout<<"Valor encontrado"<<endl;
					cout<<"El valor es: "<<ar[i - 1]<<endl;
					cout<<"Ingrese el nuevo valor: "<<endl;
					cin>>ar[i - 1];
					e = 1;
				}
			}
			if (e == 0) {
				cout<<"Valor no encontrado"<<endl;
			}
               break;
          case 4:
               cout<<"- Eliminar datos -"<<endl;
			cout<<"Introduzca el valor a eliminar"<<endl;
			cin>>eli;
			for (int i = 1; i <= contV - 1; i++) {
				if (eli == ar[i - 1]) {
					cout<<"Valor encontrado"<<endl;
					cout<<"El valor es: "<< ar[i-1]<<endl;
					cout<<"Quieres eliminarlo? Si: 1 / No: 2"<<endl;
					cin>>x;
					e = 1;
					if (x == 1) {
						cout<<"Valor eliminado"<<endl;
						ar[i - 1] = 0;
						for (int t = 1; t <= contV - 1; t++) {
							for (int i = 1; i <= contV - 2; i++) {
								if (ar[i - 1] < ar[i]) {
									au = ar[i - 1];
									ar[i - 1] = ar[i];
									ar[i] = au;
								}
							}
						}
						contV = contV - 1;
					} else {
						cout<<"Valor no eliminado"<<endl;
					}
				}
			}
			if (e == 0) {
				cout<<"No encontrado"<<endl;
			}
               break;
          case 5:
               cout<<"- Saliendo del programa -"<<endl;
               break;
          default:
               cout<<"Oups! No se ha encontrado esa operacion"<<endl;
               break;
          }
     } while (r != 5);
     return 0;
}