#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

double metros(double k);
int main(){
setlocale(LC_CTYPE, "Spanish");
double k, m;
cout<<"Introduce una distancia en kilometros: ";
cin>>k;
m=metros(k);
cout<<"La distancia en metros es: "<<m;

getch();
}
double metros(double k){
//double d;
k=k*1000;
return(k);
}
