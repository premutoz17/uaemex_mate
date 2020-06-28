#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){
	system("COLOR 2");
	setlocale(LC_CTYPE, "Spanish");

	int v[10], u[10], m;

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
	cout<<"]";

	for(int i=0; i<5; i++){
		for( int j=i+1; j<5; j++){
			if(u[i]<u[j]){
				m=u[i];
				u[i]=u[j];
				u[j]=m;

			}
		}
	}

	cout<<"\nEl vector ordenado de mayor a menor es: ";
	cout<<"[ ";
	for(int k=0; k<5; k++){

		cout<<u[k]<<" ";

	}
	cout<<"]"<<endl;

	return 0;
}
