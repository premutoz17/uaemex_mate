#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<clocale>
#include<string.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE,"spanish");
	char nombre[11];
	int mes;
	cout<<"Introduzca mes del año (1-12): ";
	cin>>mes;

	switch (mes){
		case 1:
			strcpy(nombre, "Enero" );
			break;
		case 2:
			strcpy(nombre, "Febrero");
			break;
		case 3:
			strcpy(nombre, "Marzo");
			break;
		case 4:
			strcpy(nombre, "Abril");
			break;
		case 5:
			strcpy(nombre, "Mayo");
			break;
		case 6:
			strcpy(nombre, "Junio");
			break;
		case 7:
			strcpy(nombre, "Julio");
			break;
		case 8:
			strcpy(nombre, "Agosto");
			break;
		case 9:
			strcpy(nombre, "Septiembre");
			break;
		case 10:
			strcpy(nombre, "Octubre");
			break;
        case 11:
			strcpy(nombre, "Noviembre");
			break;
        case 12:
			strcpy(nombre, "Diciembre");
			break;

	}
	if (mes>=1 && mes<=12 ){
		cout<<nombre;
	}
	else{
		cout<<"ERROR: Mes incorrecto. ";

	}
	getch();

	return 0;
}
