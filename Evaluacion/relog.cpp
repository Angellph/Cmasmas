#include <iostream>
//si es windows usar
//#include <Windows.h>
//Libreria usada por usar otro sistema operativo
#include <unistd.h>

using namespace std;
int main () {
    for (int h = 0; h <= 23; h++) {
        for (int m = 0; m <= 59; m++) {
            for (int s = 0; s <= 59; s++) {
                cout.flush();
                cout<<h<<":"<<m<<":"<<s<<endl;
                sleep(1);
            }
        }
    }
    return 0;
}