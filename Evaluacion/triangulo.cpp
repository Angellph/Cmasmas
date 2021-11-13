#include <iostream>

using namespace std;
int main(void) {
    int b;
    cout<<"Ingresa la cantidad dela base para el triángulo: ";
    cin>>b;
    if (b % 2 == 0) {
        cout<<"Error, es un numero par";
    }
    else {
        for (int i = 1; i <= b; i++) {
            for (int x = 0; x < i; x++) {
                cout<<"*";
            }
            cout<<"\n";
        }
    }
    return 0;
}