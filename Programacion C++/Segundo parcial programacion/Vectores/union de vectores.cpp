
#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){
	system("COLOR 2");
	setlocale(LC_CTYPE, "Spanish");

	int v[10], u[10], w[10], n;

	for(int i=0; i<5; i++){
		cout<<"Digite el elemento "<<i+1<<" del vector v[]: ";
		cin>>v[i];
	}


	for(int i=5; i<10; i++){
		cout<<"Digite el elemento "<<i-4<<" del vector u[]: ";
		cin>>u[i];
	}

	for(int i=0; i<5; i++){
		w[i]=v[i];
	}

	for(int i=5; i<10; i++){
		w[i]=u[i];
	}

	cout<<"\nEl vector formado por los vectores v[] y u[] es: ";
	cout<<"[ ";
	for(int k=0; k<10; k++){

		cout<<w[k]<<" ";

	}
	cout<<"]"<<endl;


}
