#include <iostream>
using namespace std;
int main () {
	int n1, d1, n2, d2, sum, mcm, a, b, den;
		cout<<"Ingresa el numerador 1 \n";
		cin>>n1;
		cout<<"Ingresa el denominador 1\n";
		cin>>d1;
		cout<<"Ingresa el numerador 2 \n";
		cin>>n2;
		cout<<"Ingresa el denominador 2\n";
		cin>>d2;
		a=d1;
		b=d2;
		while (a != b) {
			if (a > b) {
				a = a - b;
			} else{
				b = b -a;
			}
		}
		sum = (n1 * d2) + (n2 * d1);
		den = d1 * d2;
		mcm = d1 * d2 / a;
		cout<<"El resultado de la suma es: " <<sum <<" / " <<den<<"\n";
		cout<<"El mcm es: "<<mcm<<"\n";
	return 0;
}
