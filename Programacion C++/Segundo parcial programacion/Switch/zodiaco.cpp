#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

setlocale(LC_CTYPE , "Spanish");
system("COLOR 2");

int a;

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

cout<<"Digite un número del listado: "; cin>>a;

 switch (a){

 case 1: cout<<"Fuego"; break;
 case 2: cout<<"Tierra"; break;
 case 3: cout<<"Aire"; break;
 case 4: cout<<"Agua"; break;
 case 5: cout<<"Fuego"; break;
 case 6: cout<<"Tierra"; break;
 case 7: cout<<"Aire"; break;
 case 8: cout<<"Agua"; break;
 case 9: cout<<"Fuego"; break;
 case 10: cout<<"Tierra"; break;
 case 11: cout<<"Agua"; break;
 case 12: cout<<"Agua"; break;
 default: cout<<"Valor incorrecto"; break;
 }

	return 0;
}
