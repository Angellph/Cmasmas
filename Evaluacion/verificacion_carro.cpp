#include <iostream>
 
using namespace std;
int main() {
	int res, aut;
	float punt, ma, me, sum, total;
	sum= 0;
	aut= 0;
	do {
		cout<<"Ingresa los puntos contaminantes: ";
		cin>>punt;
		cout<<"Quieres agregar otro auto? Si:1 / No:2 ";
		cin>>res;
		sum= sum + punt;
		aut = aut + 1;
		total = sum / aut;
		if (aut == 1) {
			ma = punt;
			me = punt;
		} else {
			if (ma >= punt ) {
				if (me  > punt ) {
					me = punt;
				}
			}else {
				ma = punt;
				if (me > punt) {
					me = punt;
				}
			}
		}
	} while (res != 2);
	if(ma==me){
		cout<<"los puntos de contaminacion son iguales\n";
	} else {
		cout<<"los puntos de mayor contaminacion es: "<<ma<<"\n";
		cout<<"Los puntos de menor contaminacion es: "<<me<<"\n";
	}
	cout<<"El promedio de los puntos de contaminantes es: "<<total<<"\n";
}

