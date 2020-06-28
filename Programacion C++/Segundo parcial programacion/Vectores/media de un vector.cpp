#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){
	system("COLOR 2");
	setlocale(LC_CTYPE, "Spanish");

	int v[10], s=0;

	for(int i=0; i<10; i++){
		cout<<"Digite el elemento "<<i+1<<" del vector v[]: ";
		cin>>v[i];
	}

	for(int i=0; i<10; i++){
		s=s+v[i];
	}

	cout<<"La media de los elementos del vector v[] es: "<<s/10;

	return 0;

}
