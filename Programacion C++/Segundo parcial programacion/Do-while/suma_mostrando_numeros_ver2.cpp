#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");
int a, b, c, i;
char decision;
b=0;
i=0;
    do{
    cout<<"\nDigite un n�mero: "; cin>>a;
    cout<<"�Desea introducir otro n�mero? (s/n): "; cin>>decision;
    c=a+b;
    b+=a;
    i=i+1;
    cout<<"La suma acumulada es: "; cout<<c; cout<<endl;
    cout<<"La cantidad de numeros introducidos fue: "; cout<<i;
    }
    while (decision=='s');
    if(i==1){
        cout<<"\nError: solo has introducido un n�mero y no se puede efectuar la suma.";
        }

return 0;
}
