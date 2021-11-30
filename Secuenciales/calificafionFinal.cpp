#include <iostream>
//Los 3 parciales valen el 55%
#define PARCIAL 0.55
//El examen vale el 30%
#define EXAMEN 0.3
//El trabajo final vale 15%
#define TRABAJO 0.15
using namespace std;

int main() {
    float cp1, cp2, cp3, cef, ctf, pcf, pc, pcp, tcef, tctf, cf;
    cout<<"Introduzca la calificacion del 1re parcial: "<<endl;
    cin>>cp1;
    cout<<"Introduzca la calificacion del 2do parcial: "<<endl;
    cin>>cp2;
    cout<<"Introduzca la calificacion del 3er parcial: "<<endl;
    cin>>cp3;
    cout<<"Introduzca la calificacion del examen final: "<<endl;
    cin>>cef;
    cout<<"Introduzca la calificacion del trabajo final: "<<endl;
    cin>>ctf;
    pc = (cp1 + cp2 + cp3) / 3;
    pcp = pc * PARCIAL;
    tcef= cef * EXAMEN;
    tctf = ctf * TRABAJO;
    cf = pcp + tcef + tctf;
    cout<<"Calificacion final de la materia es: "<<cf<<endl;
    return 0;
}