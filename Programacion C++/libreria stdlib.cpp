//libreria stdlib
#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<clocale>

using namespace std;

int main (){

setlocale(LC_CTYPE, "Spanish");

    int a, b, c;
    system("COLOR C0");
    cout<<"Introduce un número a: ";
    cin>>a;
    cout<<"Introduce un número b: ";
    cin>>b;
    cout<<"Introduce un número c: ";
    cin>>c;
    cout<<"\na(b-c+a)="<<a*(b-c+a)<<endl;


    return 0;
}
