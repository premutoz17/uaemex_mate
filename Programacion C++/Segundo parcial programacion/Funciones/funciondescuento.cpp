#include<iostream>
#include<clocale>
//#include<conio.h>
using namespace std;

float descuento(float a, float b);

main(){
setlocale(LC_CTYPE,"Spanish");
float a, b, des;
cout<<"Introduce el costo de tu compra: ";
cin>>a;
cout<<"Introduce el monto pagado: ";
cin>>b;
des=descuento(a,b);
cout<<"El descuento ha sido del "<<des<<" %";
return 0;
}
float descuento(float a, float b){
float p, r;
r=a-b;
p=((r*100)/a);
return(p);
}
