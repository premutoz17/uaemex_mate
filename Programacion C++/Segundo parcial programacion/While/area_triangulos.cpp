#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
	setlocale (LC_CTYPE, "Spanish");
	
int i;
float b, h;
	
cout<<"\nIngrese la base de un tri�ngulo: ";
cin>>b;
cout<<"\nIngrese la altura del tri�ngulo: ";
cin>>h;
i=0;
while ((b<0 || b>0) && (h<0 || h>0))
{
cout<<"\n\tEl �rea del tri�ngulo es: "<<((b*h)/2)<<"\n";
cout<<"\nIngrese la base de un tri�ngulo: ";
cin>>b;
cout<<"\nIngrese la altura del tri�ngulo: ";
cin>>h;
i++;	
}
if (b==0 || h==0)
{
cout<<"\n\tNo se puede calcular el �rea.\n";
cout<<"\n\tEl n�mero de �reas calculadas fueron: "<<i;
}
	
	return 0;
}
