#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
	setlocale (LC_CTYPE, "Spanish");
	
int i;
float b, h;
	
cout<<"\nIngrese la base de un triángulo: ";
cin>>b;
cout<<"\nIngrese la altura del triángulo: ";
cin>>h;
i=0;
while ((b<0 || b>0) && (h<0 || h>0))
{
cout<<"\n\tEl área del triángulo es: "<<((b*h)/2)<<"\n";
cout<<"\nIngrese la base de un triángulo: ";
cin>>b;
cout<<"\nIngrese la altura del triángulo: ";
cin>>h;
i++;	
}
if (b==0 || h==0)
{
cout<<"\n\tNo se puede calcular el área.\n";
cout<<"\n\tEl número de áreas calculadas fueron: "<<i;
}
	
	return 0;
}
