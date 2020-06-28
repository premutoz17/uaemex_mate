#include<iostream>
#include<clocale>

using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double a, b;

cout<<"Introduzca el primer número: ";
cin>>a;
cout<<"Introduzca el segundo número: ";
cin>>b;

if(a<b){
    cout<<"El número "<<a <<" es menor que "<<b;
}
if(a>b){
    cout<<"El número "<<a <<" es mayor que "<<b;
}
if(a==b){
    cout<<"Los números son iguales";
}

return 0;
}
