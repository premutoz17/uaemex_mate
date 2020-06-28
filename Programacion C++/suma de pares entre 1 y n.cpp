//suma de pares entre 1 y n
#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main (){

setlocale(LC_CTYPE,"Spanish");

	int n, i=1, sum=0;
	cout<<"Introduce hasta qué número quieres hacer la suma de los pares anteriores a él: ";
	cin>>n;
	do {
	sum=sum+i-1;
	i=i+2;
	}
	while (i<=n);
	cout<<"La suma de los primeros números pares antes de "<<n;
	cout<<" es: "<<sum;

	return 0;
}
