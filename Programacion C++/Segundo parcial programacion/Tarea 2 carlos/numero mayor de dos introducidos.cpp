#include<iostream>
#include<clocale>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main (){
setlocale(LC_CTYPE, "Spanish");

	int a,b,c, h;
	cout<<"\nDigite el primer numero tipo entero: ";
	cin>>a;
	cout<<"\nDigite el segundo numero tipo entero: ";
	cin>>b;
	c=1;

	while(a>b){
		cout<<" \n\n¡ERROR! \n\n"<<b<<" no es mayor que "<<a;
		cout<<"\n\nDigite el primer numero tipo entero: ";
		cin>>a;
		cout<<"\n\nDigite el segundo numero tipo entero: ";
		cin>>b;
	}
	h=a;
	cout<<"\n\nLos números enteros que hay entre "<<h<<" y "<<b<<" son:\n\n";
	while(a<=b ){
		cout<<"\n"<<a;
	a=a+1;
	c=c+1;
	}

	return 0;
}
