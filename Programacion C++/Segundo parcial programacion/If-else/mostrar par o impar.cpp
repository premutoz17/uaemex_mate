#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main(){

    setlocale(LC_CTYPE, "Spanish");

int a;

cout<<"Digite un n�mero para comprobar si es par o impar: "; cin>>a;

    if (a%2==0){
        cout<<"El n�mero "<<a<< "es par";
    }
        else{
            cout<<"El n�mero "<< a<<"es impar"<<endl;
            }

return 0;
}
