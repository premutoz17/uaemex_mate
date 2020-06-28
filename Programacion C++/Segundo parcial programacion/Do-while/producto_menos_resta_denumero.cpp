#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");
float a, b, c, i, iter;
char decision;
c=0;
i=0;
iter=0;
    do{
    cout<<"\nDigite un número: "; cin>>a;
    b=a*a-a;
    cout<<a; cout<<"*"; cout<<a; cout<<"-"; cout<<a; cout<<"="; cout<<b;
    i=c+b;
    iter=iter+1;
    cout<<"\nLa suma acumulada es: "; cout<<i; cout<<endl;
    cout<<"\nEl número de números introducidos fue: "; cout<<iter; cout<<endl;
    cout<<"\n¿Desea introducir otro número? (s/n): "; cin>>decision;
    c+=b;
    }
    while (decision=='s');

return 0;
}
