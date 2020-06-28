//Determinar cuales son pares e impares
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<clocale>

using namespace std;

int main (){

setlocale(LC_CTYPE, "Spanish");

    int a, b, c;
    system("COLOR B2");
    cout<<"Introduce un número a: ";
    cin>>a;
    cout<<"Introduce un número b: ";
    cin>>b;
    cout<<"Introduce un número c: ";
    cin>>c;
    int i=(a%2)+(b%2)+(c%2), p=3-i;
    cout<<"\nEl numero de impares es: "<<i;
    cout<<"\nEl numero de pares es: "<<p<<endl;

    return 0;
}
