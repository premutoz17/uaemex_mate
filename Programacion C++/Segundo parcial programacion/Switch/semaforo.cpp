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


cout<<"Digite un número del listado: "; cin>>a;

 switch (a){

 case 1: cout<<"Detengase"; break;
 case 2: cout<<"Disminuya la velocidad"; break;
 case 3: cout<<"Avance"; break;
 default: cout<<"ERROR: " <<a <<" no está asociado a ningun color";
 }


	return 0;
}
