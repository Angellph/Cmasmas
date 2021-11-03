#include <iostream>
#define IVA 0.16
using namespace std;
int main() {
    int respuesta, res, art, cliente, resp, Sresp, n, num, a = 0, b = 1, c = 0, Ni, Nf, i;
    double total = 0, precio, compra, totalP, Dcl, iva, cambio, caja;
    do {
        cout<<"==========Menu de ejercicios==========\n";
        cout<<"1. Determinar el total a pagar de tus articulos.\n";
        cout<<"2. Registrar las ventas de una tienda\n";
        cout<<"3. Series\n";
        cout<<"Elige: ";
        cin>>res;
        switch (res) {
            case 1:
                total = 0;
                respuesta = 0;
                cout<<"--------------------------------------------\n";
                cout<<"Elegiste el ejercicio 1 \n";
                cout<<"En un supermercado una ama de casa pone en su carrito los articulos\nque va tomando por lo que cada vez que toma un articulo anota su precio \njunto con la cantidad de artículos iguales que ha tomado Ayúdale a esta señora a obtener el total de sus compras.\n";
                while (respuesta != 2) {
                    //Pedir la cantidad de los articulos
                    cout<<"Ingresa la cantidad de tus articulos: ";
                    cin>>art;
                    //Pedir el precio del articulo
                    cout<<"Ingresa el precio del articulo: ";
                    cin>>precio;
                    //Calcular el total por la compra de los articulos
                    total = total + (art * precio);
                    //Preguntar si quiere agregar mas articulos
                    cout<<"Quieres agregar mas articulos? Si: 1 / No: 2\n";
                    cin>>respuesta;
                    if (respuesta == 2) {
                        res = 2;
                    }
                }
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                //Mostrar el total de lo que debe de pagar
                cout<<"El total que debes pagar por la compra de tus articulos es: $"<<total<<"\n";
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - -\n";
                break;
            case 2:
                totalP = 0;
                cliente = 0;
                iva = 0;
                cambio = 0;
                caja = 0;
                resp = 0;
                cout<<"--------------------------------------------\n";
                cout<<"Elegiste el ejercicio 2 \n";
                cout<<"Suponga que tiene una tienda y desea registrar sus ventas por medio de una computadora.\n";
                while (resp != 2) {
                    //Pedir el monto de la venta
                    cout<<"Ingresa el monto de la venta: ";
                    cin>>compra;
                    //Calcular Iva
                    iva = compra * IVA;
                    //Total a pagar
                    totalP = compra + iva;
                    cout<<"--------------------------------------------\n";
                    cout<<"IVA: $"<<iva<<"\n";
                    cout<<"Total a pagar: $"<<totalP<<"\n";
                    cout<<"--------------------------------------------\n";
                    //Contador de clientes
                    cliente = cliente + 1;
                    cout<<"Ingresa la cantidad de dinero del cliente: ";
                    cin>>Dcl;
                    if (Dcl > compra) {
                        //Cambio
                        cambio = Dcl - totalP;
                        //Caja
                        caja = caja + totalP;
                        switch (cliente) {
                        case 1:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 2:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 3:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 4:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 5:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 6:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 7:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 8:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 9:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        case 10:
                            cout<<"Ticket\n";
                            cout<<"----------------------------------------------\n";
                            cout<<"Cantidad de dinero del cliente: $"<<Dcl<<"\n";
                            cout<<"Monto de la venta: $"<<compra<<"\n";
                            cout<<"IVA: $"<<iva<<"\n";
                            cout<<"El total a pagar fue de: $"<<totalP<<"\n";
                            cout<<"Cambio: $"<<cambio<<"\n";
                            cout<<"----------------------------------------------\n";
                            break;
                        default:
                            cout<<"Oups! No se ha encontrado ese ejercicio\n";
                            break;
                        }
                    } else {
                        cout<<"La cantidad es menor que el monto de la venta\n";
                    }
                    cout<<"Desea ingresar otro cliente? Si: 1 / No: 2: ";
                    cin>>resp;
                    if (resp == 2) {
                        res = 2;
                    }
                }
                cout<<"----------------------------------------------\n";
                cout<<"La cantidad de dinero que hay en la caja: $"<<caja<<"\n";
                cout<<"----------------------------------------------\n";
                break;
            case 3:
                do {
                    cout<<"--------------------------------------------\n";
                    cout<<"Elegiste el ejercicio 3 \n";
                    cout<<"==========Menu de series==========\n";
                    cout<<"1. Serie de impares\n";
                    cout<<"2. Serie de Fibonacci\n";
                    cout<<"3. Serie de números positivos con un inicio, final e incremento\n";
                    cout<<"Elige: ";
                    cin>>Sresp;
                    switch (Sresp) {
                    case 1:
                        cout<<"--------------------------------------------\n";
                        cout<<"Elegiste el ejercicio 1 de series \n";
                        cout<<"Serie de impares\n";
                        cout<<"De cuantos numero quieres la serie impar? ";
                        cin>>n;
                        for (int i = 1; i <= n; i++) {
                            if (i % 2 != 0) {
                                cout<<i<<"\n";
                            }
                        }
                        break;
                    case 2:
                        cout<<"--------------------------------------------\n";
                        cout<<"Elegiste el ejercicio 2 de series \n";
                        cout<<"Serie de Fibonacci\n";
                        cout<<"Por favor ingrese numero: ";
                        cin>>num;
                        a = 0;
                        b =  1;
                        for (int i = 1; i < num; i++) {
                            cout<<a<<"\n";
                            c = a + b;
                            a = b;
                            b = c;
                        }
                        break;
                    case 3:
                        cout<<"--------------------------------------------\n";
                        cout<<"Elegiste el ejercicio 2 de series \n";
                        cout<<"Serie de números positivos con un inicio, final e incremento\n";
                        cout<<"Digita el numero positivo de inicio: ";
                        cin>>Ni;
                        cout<<"Digita el numero final: ";
                        cin>>Nf;
                        if (Ni < Nf) {
                            if (Ni >= 0 && Nf >= 0 && i >= 0) {
                                cout<<"Digita el incremento: ";
                                cin>>i; 
                                for (int x = Ni; x <= Nf; x = x + i) {
                                    cout<<x<<"\n";
                                }
                            } else {
                                cout<<"Error es un numero negativo\n";
                            }
                        } else {
                            cout<<"Error\n";
                        }
                        break;
                    default:
                        cout<<"Oups! No se ha encontrado esa serie\n";
                        break;
                    }
                    cout<<"Desea usar otra serie? Si: 1 / No: 2: ";
                    cin>>Sresp;
                } while (Sresp != 2);
                break;
            default:
                cout<<"Oups! No se ha encontrado ese ejercicio\n";
                break;
        }
        cout<<"Quieres usar otro ejercicio? Si: 1 / No: 2: ";
        cin>>res;
    } while (res != 2);
    return 0;
}