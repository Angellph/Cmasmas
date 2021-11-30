#include <iostream>
using namespace std;

int main() {
    int ed, np;
    cout<<"Escribe tu edad: "<<endl;
    cin>>ed;
    np = (220 - ed ) / 10;
    cout<<"Tus pulsaciones son: "<<np<<" por cada 10 segundos"<<endl;
    return 0;
}