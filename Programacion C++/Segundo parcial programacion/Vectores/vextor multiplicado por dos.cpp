#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){
	system("COLOR 2");
	setlocale(LC_CTYPE, "Spanish");

	int v[10], u[10];

	for(int i=0; i<5; i++){
		cout<<"Digite el elemento "<<i+1<<" del vector v[]: ";
		cin>>v[i];
	}

	for(int i=0; i<5; i++){
		u[i]=2*v[i];
	}

	cout<<"\nEl vector v[] multiplicado por 2 es: ";
	cout<<"[ ";
	for(int k=0; k<5; k++){

		cout<<u[k]<<" ";

	}
	cout<<"]"<<endl;

}
