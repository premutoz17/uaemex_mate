#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

	setlocale(LC_CTYPE , "Spanish");
	
	int a;
	
	cout<<"Digie un número entre el 1 y el 7"; cin>>a;
	
	if(a>=1 || a<=7){
		switch(a){
			case 1: cout<<"Es domingo";break; 
			case 2: cout<<"Es lunes";break; 
			case 3: cout<<"Es martes";break; 
			case 4: cout<<"Es miercoles";break; 
			case 5: cout<<"Es jueves";break; 
			case 6: cout<<"Es viernes";break; 
			case 7: cout<<"Es sabado";break; 
		}
		
	}
	else{
		cout<<"Ese  no es un dia de la semana";
	}
	return 0;
}
