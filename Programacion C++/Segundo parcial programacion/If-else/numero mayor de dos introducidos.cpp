#include<iostream>
#include<clocale>

using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double a, b;

cout<<"Introduzca el primer n�mero: ";
cin>>a;
cout<<"Introduzca el segundo n�mero: ";
cin>>b;

if(a<b){
    cout<<"El n�mero "<<a <<" es menor que "<<b;
}
if(a>b){
    cout<<"El n�mero "<<a <<" es mayor que "<<b;
}
if(a==b){
    cout<<"Los n�meros son iguales";
}

return 0;
}
