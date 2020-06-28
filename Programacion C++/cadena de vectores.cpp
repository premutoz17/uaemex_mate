//cadena de vectores

#include<stdio.h>
#include<clocale>
#include<conio.h>
#include<iostream>

using namespace std;

int main(){

	setlocale(LC_ALL, "spanish");

    char nombre[15], apellido1[15], apellido2[15];
    printf("Introduce tu primer nombre: ");
    scanf("%s",nombre);
    printf("Introduce tu primer apellido: ");
    scanf("%s",apellido1);
    printf("Introduce tu segundo apellido: ");
    scanf("%s",apellido2);
    printf("Su nombre es: %s %s %s",nombre, apellido1, apellido2);

    puts("\n\nUsted es: ");
    puts(nombre);
    puts(apellido1);
    puts(apellido2);

	return 0;
}
