#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

int edad;

cout<<"�Qu� edad tienes?: ";
cin>>edad;

	if(edad>20){
		cout<<"Eres mayor de edad";
	}
	else{
		cout<<"No eres mayor de edad";
	}
return 0;
}

/*
Pseudoc�digo.

INICIO
Mostrar "�Qu� edad tienes?"
Leer edad
Si edad>20 entonces
	Mostrar "Eres mayor de edad"
Si no
	Mostrar "No eres mayor de edad"
Fin
*/
