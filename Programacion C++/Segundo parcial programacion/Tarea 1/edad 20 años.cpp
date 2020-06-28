#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

int a;

cout<<"¿Qué edad tienes?: ";
cin>>a;

	if(a>20){
		cout<<"Eres mayor de edad";
	}

return 0;
}
