#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

int a, d;

cout<<"Digite un n�mero entero: ";
cin>>a;

if(a<0){
    a=-1*a;
}

d=a/10;

if(d<1){
    cout<<"El n�mero tiene 1 digito";
}
if(d<10 && d>=1){
    cout<<"El n�mero tiene 2 digitos";
}
if(d<100 && d>=10){
    cout<<"El n�mero tiene 3 digitos";
}

if(a>=1000 || a<=-1000){
    cout<<"Tiene m�s de tres digitos";
}

return 0;
}
