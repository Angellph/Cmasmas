#include <iostream>
//Ginecologia su porcentaje de presupuesto es de 40%
#define G 0.4
//Traumatologia su % de presupuesto es de 30%
#define T 0.3
//Pediatria su % de presupuesto es de 30%
#define P 0.3

using namespace std;

int main() {
    float preA, preGi, preT, preP;
    cout<<"Introduzca el presupuesto: "<<endl;
    cin>>preA;
    preGi = preA * G;
    preT = preA * T;
    preP = preA * P;
    cout<<"Ginecologia recibe: $"<<preGi<<endl;
    cout<<"Traumatologia recibe: $"<<preT<<endl;
    cout<<"Pediatria recibe: $"<<preP<<endl;
    return 0;
}