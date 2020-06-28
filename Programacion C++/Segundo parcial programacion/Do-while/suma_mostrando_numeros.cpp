#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");
int a, b, c, i;
char decision;
b=0;
i=0;
    do{
    cout<<"\nDigite un número: "; cin>>a;
    cout<<"¿Desea introducir otro número? (s/n): "; cin>>decision;
    c=a+b;
    b+=a;
    cout<<"La suma acumulada es: "; cout<<c;
    i=i+1;
    }
    while (decision=='s');

cout<<"\nLa cantidad de numeros introducidos fue: "; cout<<i;

return 0;
}
