//operadores aritmeticos
#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main (){

setlocale(LC_CTYPE, "Spanish");

    int a, b;
    cout<<"Introduce un n�mero a: ";
    cin>>a;
    cout<<"\nIntroduce un n�mero b: ";
    cin>>b;
    cout<<"\nLa suma de a y b es:"<<a+b;
    cout<<"\nLa resta de a y b es:"<<a-b;
    cout<<"\nLa multiplicaci�n de a y b es:"<<a*b;
    cout<<"\nLa divisi�n de a y b es:"<<a/b;
    cout<<"\nEl resto de la divisi�n de a y b es:"<<a%b<<endl;

    return 0;
}
