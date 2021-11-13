#include <iostream>
 
using namespace std;
int main() {
    int n;
    cout<<"Ingresa el numero del tamaño de linea: ";
    cin>>n;
    for (int i = 1; i <= n; i++){
        if ( n == 0){
            cout<<"";
        } else {
            cout<<"* ";
        }
    }
    //Cuadrado
    // int b, h;
    // cout<<"Ingresa la base: ";
    // cin>>b;
    // cout<<"Ingresa la altura: ";
    // cin>>h;
    // if ( b == h) {
    //     for (int i = 1; i <= b; i++) {
    //         for (int x = 1; x <= h; x++) {
    //             if (i == 1 || i == b || x == 1 || x == b) {
    //                 cout<<" *";
    //             } else {
    //                 cout<<"  ";
    //             }
    //         }
    //         cout<<"\n";
    //     }
    // } else {
    //     cout<<"Numeros erroneos";  
    // }
    
    

    //Triangulo
    // int b;
    // cout<<"Ingresa la cantidad dela base para el triángulo: ";
    // cin>>b;
    // if (b % 2 == 0) {
    //     cout<<"Error, es un numero par";
    // }
    // else {
    //     for (int i = 1; i <= b; i++) {
    //         for (int x = 0; x < i; x++) {
    //             cout<<"*";
    //         }
    //         cout<<"\n";
    //     }
    // }
    return 0;
}