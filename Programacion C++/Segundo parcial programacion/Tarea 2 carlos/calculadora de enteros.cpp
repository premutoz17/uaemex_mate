#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
	setlocale (LC_CTYPE, "Spanish");
	int n, x, y;

	cout<<"\n\t1. Sumar dos números.";
	cout<<"\n\t2. Restar dos números.";
	cout<<"\n\t3. Multiplicar dos números.";
	cout<<"\n\t4. Dividir dos números.";
	cout<<"\n\t5. Salir.";
	cout<<"\n\tElija un número del menú: ";
	cin>>n;

	do
	{
		if (n>=1 && n<=5)
		{
	switch  (n)
	{
		case 1: cout<<"\nIngresa un número entero: ";
				cin>>x;
				cout<<"\nIngresa otro número entero: ";
				cin>>y;
				cout<<"\nLa suma de "<<x<<" + "<<y<<" es: "<<x+y;
				cout<<"\nElija un número del menú: ";
				cin>>n;	break;
		case 2: cout<<"\nIngresa un número entero: ";
				cin>>x;
				cout<<"\nIngresa otro número entero: ";
				cin>>y;
				cout<<"\nLa resta de "<<x<<" - "<<y<<" es: "<<x-y;
				cout<<"\nElija un número del menú: ";
				cin>>n; break;
		case 3: cout<<"\nIngresa un número entero: ";
				cin>>x;
				cout<<"\nIngresa otro número entero: ";
				cin>>y;
				cout<<"\nLa multiplicación de "<<x<<" * "<<y<<" es: "<<x*y;
				cout<<"\nElija un número del menú: ";
				cin>>n; break;
		case 4: cout<<"\nIngresa un número entero: ";
				cin>>x;
				cout<<"\nIngresa otro número entero: ";
				cin>>y;
				cout<<"\nLa división de "<<x<<" / "<<y<<" es: "<<x/y;
				cout<<"\nElija un número del menú: ";
				cin>>n; break;
		case 5: break;
	}
		}
	}
	while (n!=5);

	return 0;
}
