#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main(){

    setlocale(LC_CTYPE, "Spanish");

int a;

cout<<"Digite un a�o para comprobar si es bisiesto: "; cin>>a;

    if (a%4==0&&a%100!=0||a%400==0){
        cout<<"El a�o es bisiesto";
    }
        else{
            cout<<"El a�o no es bisiesto"<<endl;
            }
return 0;
}
