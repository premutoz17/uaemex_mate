#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){
	system("COLOR 2");
	setlocale(LC_CTYPE, "Spanish");

	int v[10], n, m;

	cout<<"Digite el número de elementos del vector: ";
	cin>>n;

	for(int i=0; i<n; i++){
		cout<<"Digite el elemento "<<i+1<<" del vector: ";
		cin>>v[i];
	}

	for(int i=0; i<n; i++){
		for( int j=i+1; j<n; j++){
			if(v[i]<v[j]){
				m=v[i];
				v[i]=v[j];
				v[j]=m;

			}
		}
	}

	cout<<"\nEl vector ordenado de mayor a menor es: ";
	cout<<"[ ";
	for(int k=0; k<n; k++){

		cout<<v[k]<<" ";

	}
	cout<<"]"<<endl;

	return 0;

}
