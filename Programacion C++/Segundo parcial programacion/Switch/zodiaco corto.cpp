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

 case 1: case 5: case 9: cout<<"Fuego"; break;
 case 2: case 6: case 10: cout<<"Tierra"; break;
 case 3: case 7: cout<<"Aire"; break;
 case 4: case 11: case 8: case 12: cout<<"Agua"; break;


 }


	return 0;
}
