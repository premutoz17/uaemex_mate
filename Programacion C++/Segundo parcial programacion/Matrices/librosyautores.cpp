#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
int main(){
	string libros[5][2];
	cout<<"ingrese las siguiente informacion de los libros: ";
	string titulo, autor;
	for(int i=0; i<5; i++){
		cout<<"\n\t Libro "<<i+1;
		cout<<"\n\t Titulo: ";
		getline(cin,titulo);
		cout<<"\n\t Autor: ";
		getline(cin, autor);
		libros[i][0]= titulo;
		libros[i][1]= autor;
		return 0;
	}
}
