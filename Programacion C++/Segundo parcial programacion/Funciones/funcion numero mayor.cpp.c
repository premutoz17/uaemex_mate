#include<iostream>
#include<clocale>
#include<conio.h>

using namespace std;

int Mayor(int a, int b);

main(){

setlocale(LC_CTYPE,"Spanish");

int a, b, mayor;
cout<<"Teclee el primer numero: ";
cin>>a;
cout<<"\nTeclee el segundo numero: ";
cin>>b;
mayor=Mayor(a,b);
getch();
}

int Mayor(int a, int b){
    if(a>b)
    return a;
    else
    return b;
}
