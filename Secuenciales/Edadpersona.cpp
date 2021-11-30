#include <iostream>
#define AC 2021

using namespace std;

int main() {
    int an, edad;
    cout<<"Escriba el año de nacimiento: "<<endl;
    cin>>an;
    edad = AC - an;
    cout<<"Su edad es: "<<edad<<" años"<<endl;
    return 0;
}