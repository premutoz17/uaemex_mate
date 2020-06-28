#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");

int a, n, p;
char respuesta;

n=1;
respuesta='s';
    while (respuesta=='s'){
        n=1;
        cout<<"Digite un número: ";
        cin>>a;
        cout<<endl;
        cout<<"Su tabla de multiplicar es: " <<endl <<endl;
            while (n>=1 && n<=10){
                p=n*a;
                cout<<a <<"x" <<n <<"=" <<p <<endl;
                n++;
            }
       cout<<"\n¿Desea ver otra tabla? (s/n): ";
       cin>>respuesta;
    }

return 0;
}
