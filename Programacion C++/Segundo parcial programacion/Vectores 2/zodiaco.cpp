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

cout<<"1. Aries\n";
cout<<"2. Tauro\n";
cout<<"3. Géminis\n";
cout<<"4. Cáncer\n";
cout<<"5. Leo\n";
cout<<"6. Virgo\n";
cout<<"7. Libra\n";
cout<<"8. Escorpio\n";
cout<<"9. Sagitario\n";
cout<<"10. Capricornio\n";
cout<<"11. Acuario\n";
cout<<"12. Picis\n";

cout<<"Digite un número del listado: "; cin>>mes;
	switch (mes){
		case 1:
			strcpy(nombre, "Fuego" );
			break;
		case 2:
			strcpy(nombre, "Tierra");
			break;
		case 3:
			strcpy(nombre, "Aire");
			break;
		case 4:
			strcpy(nombre, "Agua");
			break;
		case 5:
			strcpy(nombre, "Fuego");
			break;
		case 6:
			strcpy(nombre, "Tierra");
			break;
		case 7:
			strcpy(nombre, "Aire");
			break;
		case 8:
			strcpy(nombre, "Agua");
			break;
		case 9:
			strcpy(nombre, "Fuego");
			break;
		case 10:
			strcpy(nombre, "Tierra");
			break;
        case 11:
			strcpy(nombre, "Agua");
			break;
        case 12:
			strcpy(nombre, "Agua");
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
