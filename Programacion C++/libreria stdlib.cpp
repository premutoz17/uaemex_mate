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
    cout<<"Introduce un n�mero a: ";
    cin>>a;
    cout<<"Introduce un n�mero b: ";
    cin>>b;
    cout<<"Introduce un n�mero c: ";
    cin>>c;
    cout<<"\na(b-c+a)="<<a*(b-c+a)<<endl;


    return 0;
}
