#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");
int a, b, c, r;
char decision;
b=0;

    do{
    cout<<"Digite un numero: "; cin>>a;
    c=a+b;
    b+=a;
    cout<<"¿Desea introducir otro número? (s/n): "; cin>>decision;
    }
    while (decision=='s');
cout<<"La suma de los numeros es: "; cout<<c;

return 0;
}
