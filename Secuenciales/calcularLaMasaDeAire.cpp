#include <iostream>
using namespace std;

int main() {
    float pr, vol, temp, masa;
    cout<<"Escribe la presion: "<<endl;
    cin>>pr;
    cout<<"Escribe el volumen: "<<endl;
    cin>>vol;
    cout<<"Escribe la temperatura: "<<endl;
    cin>>temp;
    masa = (pr * vol) / (0.37 * (temp + 460));
    cout<<"La masa de aire es: "<<masa<<endl;
    return 0;
}