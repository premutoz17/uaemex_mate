//Ejemplo cadena de caracteres
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main(){

    setlocale(LC_CTYPE, "Spanish");
    char cadena[6];//define un vector o cadena de 6 caracteres
    cadena[0]='L';
    cadena[1]='e';
    cadena[2]='t';
    cadena[3]='r';
    cadena[4]='a';
    cadena[5]='s';
    cadena[6]=0;//caracter nulo, que significa fin del texto
    printf("La cadena es: %s\n", cadena);
    printf("La tercera letra de la cadena es: %c",cadena[2]);
    printf("Las ultimas tres letras de la cadena son: %s",cadena[3]);

getch();
}
