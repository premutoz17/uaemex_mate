#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;
int main()
{

	setlocale(LC_CTYPE , "Spanish");
	system("COLOR F3");

	int a;
	cout<<"Ingrese un número entre el 1 y el 12: ";
	cin>>a;
	switch(a)
	{
	case 1: cout<<"1. Enero";break;
	case 2:cout<<"2. Febrero";break;
	case 3:cout<<"3. Marzo";break;
	case 4:cout<<"4. Abril";break;
	case 5:cout<<"5. Mayo";break;
	case 6:cout<<"6. Junio";break;
	case 7:cout<<"7. Julio";break;
	case 8:cout<<"8. Agosto";break;
	case 9:cout<<"9. Septiembre";break;
	case 10:cout<<"10. Octubre";break;
	case 11:cout<<"11. Noviembre";break;
	case 12:cout<<"12. Diciembre";break;
	default: cout<<"Mes incorrecto";break;
	}

return 0;

}
