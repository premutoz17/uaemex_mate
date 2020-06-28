#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

float tabla(float a);

int main (){
setlocale(LC_CTYPE, "Spanish");
float a;
char respuesta;
respuesta='s';
    while (respuesta=='s'){
        cout<<"Digite un número: ";
        cin>>a;
        tabla(a);
        cout<<"\n¿Desea ver otra tabla? (s/n): ";
        cin>>respuesta;
    }
return 0;
}
float tabla(float a){
float p;
int n;
n=1;
    while (n>=1 && n<=10){
        p=n*a;
        cout<<a <<"x" <<n <<"=" <<p <<endl;
        n++;
    }
return (p);
}
