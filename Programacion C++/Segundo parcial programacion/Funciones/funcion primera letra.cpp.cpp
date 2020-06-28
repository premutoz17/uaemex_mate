// Función. Primer letra de una palabra.
#include<iostream>
#include<conio.h>
#include<clocale>
#include<stdlib.h>
using namespace std;
char palabra(char [0]);
int main ()
{
	setlocale (LC_CTYPE, "Spanish");
	system ("COLOR 3");
	char palabra [100], letra;
	
	cout<<"\n\tIngrese una palabra: ";
	cin>>palabra;
	letra=palabra[0];
	cout<<"\n\tLa primera letra de la palabra es: "<<letra;
	
	getch ();
}

	char palabra(char [0])
	{
		palabra[0];
		return 0;
	}
