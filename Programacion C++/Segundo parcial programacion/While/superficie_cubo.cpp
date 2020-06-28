#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
setlocale (LC_CTYPE, "Spanish");
float a;
cout<<"\nIngrese la medida de la arista de un cubo: ";
cin>>a;
while (a<=0)
{
cout<<"\n\tError, la arista debe ser mayor que cero.\n";
cout<<"\nIngrese la medida de la arista de un cubo: ";
cin>>a;
}
if (a>0)
{
cout<<"\n\tLa superficie de un cubo de arista "<<a<<" es: "<<((a*a)*6);
}	
	return 0;
}
