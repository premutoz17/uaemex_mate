#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");
float a, b, c, i;
char decision;
c=0;
i=0;
    do{
    cout<<"\nDigite un número: "; cin>>a;
    b=a*a;
    cout<<a; cout<<" elevado a 2 es: "; cout<<b;
    i=c+b;
    cout<<"\nLa suma acumulada es: "; cout<<i; cout<<endl;
    cout<<"\n¿Desea introducir otro número? (s/n): "; cin>>decision;
    c+=b;
    }
    while (decision=='s');

return 0;
}
