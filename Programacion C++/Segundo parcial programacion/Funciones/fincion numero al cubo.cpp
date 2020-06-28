#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int cubo(int a);
int main(){
setlocale(LC_CTYPE, "Spanish");
int a, c;
cout<<"Introduce un número: ";
cin>>a;
c=cubo(a);
cout<<"El cubo del número es: "<<c;

return 0;
}
int cubo(int a){
a=a*a*a;
}
