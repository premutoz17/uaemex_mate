//operadores aritmeticos
#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main (){

setlocale(LC_CTYPE, "Spanish");

    int a, b;
    cout<<"Introduce un número a: ";
    cin>>a;
    cout<<"\nIntroduce un número b: ";
    cin>>b;
    cout<<"\nLa suma de a y b es:"<<a+b;
    cout<<"\nLa resta de a y b es:"<<a-b;
    cout<<"\nLa multiplicación de a y b es:"<<a*b;
    cout<<"\nLa división de a y b es:"<<a/b;
    cout<<"\nEl resto de la división de a y b es:"<<a%b<<endl;

    return 0;
}
