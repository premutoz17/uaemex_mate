#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double a, b, c;

cout<<"Introduzca tres n�meros distintos. \n";
cout<<"Introduce el primer n�mero: ";
cin>>a;
cout<<"Introduce el segundo n�mero: ";
cin>>b;
cout<<"Introduce el tercer n�mero: ";
cin>>c;

if(a>b && a>c){
    cout<<"El n�mero mayor es: "<<a;
}

if(b>a && b>c){
    cout<<"El n�mero mayor es: "<<b;
}

if(c>a && c>b){
    cout<<"El n�mero mayor es: "<<c;
}

if(a==b && a==c){
    cout<<"Los tres n�meros son iguales";
}

return 0;
}
