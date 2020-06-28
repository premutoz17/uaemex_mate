#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double a, b, c;

cout<<"Introduzca tres números distintos. \n";
cout<<"Introduce el primer número: ";
cin>>a;
cout<<"Introduce el segundo número: ";
cin>>b;
cout<<"Introduce el tercer número: ";
cin>>c;

if(a>b && a>c){
    cout<<"El número mayor es: "<<a;
}

if(b>a && b>c){
    cout<<"El número mayor es: "<<b;
}

if(c>a && c>b){
    cout<<"El número mayor es: "<<c;
}

if(a==b && a==c){
    cout<<"Los tres números son iguales";
}

return 0;
}
