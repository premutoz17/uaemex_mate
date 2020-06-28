#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

setlocale(LC_CTYPE , "Spanish");

int a;

cout<<"1. Rojo\n";
cout<<"2. Amarillo\n";
cout<<"3. Verde\n";


cout<<"Digite un número del 1 al 10: "; cin>>a;

switch (a){

case 1: cout<<"Uno"; break;
case 2: cout<<"Dos"; break;
case 3: cout<<"Tres"; break;
case 4: cout<<"Cuatro"; break;
case 5: cout<<"Cinco"; break;
case 6: cout<<"Seis"; break;
case 7: cout<<"Siete"; break;
case 8: cout<<"Ocho"; break;
case 9: cout<<"Nueve"; break;
case 10: cout<<"Diez"; break;
default: cout<<"ERROR: El número debe ser >=1 y <=10";
}
	return 0;
}
