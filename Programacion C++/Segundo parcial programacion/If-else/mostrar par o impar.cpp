#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main(){

    setlocale(LC_CTYPE, "Spanish");

int a;

cout<<"Digite un número para comprobar si es par o impar: "; cin>>a;

    if (a%2==0){
        cout<<"El número "<<a<< "es par";
    }
        else{
            cout<<"El número "<< a<<"es impar"<<endl;
            }

return 0;
}
