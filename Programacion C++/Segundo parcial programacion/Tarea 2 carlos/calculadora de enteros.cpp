#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
	setlocale (LC_CTYPE, "Spanish");
	int n, x, y;

	cout<<"\n\t1. Sumar dos n�meros.";
	cout<<"\n\t2. Restar dos n�meros.";
	cout<<"\n\t3. Multiplicar dos n�meros.";
	cout<<"\n\t4. Dividir dos n�meros.";
	cout<<"\n\t5. Salir.";
	cout<<"\n\tElija un n�mero del men�: ";
	cin>>n;

	do
	{
		if (n>=1 && n<=5)
		{
	switch  (n)
	{
		case 1: cout<<"\nIngresa un n�mero entero: ";
				cin>>x;
				cout<<"\nIngresa otro n�mero entero: ";
				cin>>y;
				cout<<"\nLa suma de "<<x<<" + "<<y<<" es: "<<x+y;
				cout<<"\nElija un n�mero del men�: ";
				cin>>n;	break;
		case 2: cout<<"\nIngresa un n�mero entero: ";
				cin>>x;
				cout<<"\nIngresa otro n�mero entero: ";
				cin>>y;
				cout<<"\nLa resta de "<<x<<" - "<<y<<" es: "<<x-y;
				cout<<"\nElija un n�mero del men�: ";
				cin>>n; break;
		case 3: cout<<"\nIngresa un n�mero entero: ";
				cin>>x;
				cout<<"\nIngresa otro n�mero entero: ";
				cin>>y;
				cout<<"\nLa multiplicaci�n de "<<x<<" * "<<y<<" es: "<<x*y;
				cout<<"\nElija un n�mero del men�: ";
				cin>>n; break;
		case 4: cout<<"\nIngresa un n�mero entero: ";
				cin>>x;
				cout<<"\nIngresa otro n�mero entero: ";
				cin>>y;
				cout<<"\nLa divisi�n de "<<x<<" / "<<y<<" es: "<<x/y;
				cout<<"\nElija un n�mero del men�: ";
				cin>>n; break;
		case 5: break;
	}
		}
	}
	while (n!=5);

	return 0;
}
