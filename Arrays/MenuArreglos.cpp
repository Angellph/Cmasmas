#include <iostream>

using namespace std;
int main() {
    int r = 0, size = 100, upper = 0, cadena, band = 0;
    char c[size];
    cout<<"Introduzca la cadena: ";
    cin.getline(c, size);
    cout<<"Elija el ejercicio"<<endl;
    cout<<"1. Contar y mostrar cuántas mayúsculas hay en la cadena."<<endl;
    cout<<"2. Encriptar sumando 3 al código ASCII de cada carácter y mostrar la cadena resultante."<<endl;
    cout<<"3. Imprimir si la cadena introducida es un palíndromo o no lo es."<<endl;
    cin>>r;
     switch (r) {
     case 1:
        for(int i = 0; c[i] != 0; i++) {
            if(c[i]>='A' && c[i]<='Z'){
                upper++;
            }
        }
        cout<<"Letras mayusculas: "<<upper;
        break;
     case 2:
        for (int i = 0; i < 50; i++) {
		    if (c[i]!= '\0') {
			    c[i] = c[i] + 3;
		    }
	    }
	cout<<"\n"<<c;
	cout<<"\n";
        break;
     case 3:
        cadena = strlen(c);
        for( int i=0; i < cadena; i++){
            if(c[i] != c[cadena-i-1]){
                band = 1;
            }
        }
        if (band) {
            cout<< c << " no es un palindromo"<<endl; 
        }    
        else {
            cout<< c << " es un palindromo"<<endl; 
        }
        break;
     default:
        cout<<"Oups, no existe ese ejercicio";
         break;
     }
     return 0;
}