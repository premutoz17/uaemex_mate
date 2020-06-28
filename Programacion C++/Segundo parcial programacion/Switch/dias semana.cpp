#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

	setlocale(LC_CTYPE , "Spanish");

	int a;

	cout<<"Digie un número entre el 1 y el 7: "; cin>>a;


		switch(a){
			case 1: cout<<"Es domingo";break;
			case 2: cout<<"Es lunes";break;
			case 3: cout<<"Es martes";break;
			case 4: cout<<"Es miercoles";break;
			case 5: cout<<"Es jueves";break;
			case 6: cout<<"Es viernes";break;
			case 7: cout<<"Es sabado";break;
			default: cout<<"No has introducido un valor valido";break;
		}


	return 0;
}
