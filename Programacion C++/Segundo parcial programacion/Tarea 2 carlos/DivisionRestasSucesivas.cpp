/* TAREA. Ejercicio 5.
División entera con restas sucesivas. */
#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main ()
{
	setlocale (LC_CTYPE, "Spanish");
	system ("COLOR 3");
	int x, y, q, r;
	
	cout<<"\n\tIntroduzca el dividendo: ";
	cin>>x;
	cout<<"\n\tIntroduzca el divisor: ";
	cin>>y;
	
	q=x*(pow(y, -1));
	r=x-(y*q);
		
	if (x<=0 || y<=0)
	{
		cout<<"\n\tError, ambos números deben ser mayores que cero.";
	}
	else
	{
		cout<<"\n\t"<<x<<" div "<<y<<" = "<<q<<" < Resto = "<<r<<" >";
	}
	
	return 0;
}
