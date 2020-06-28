//Ejemplo de menu
#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main(){

/*
     setlocale(LC_CTYPE, "Spanish");
     int i;
     printf("Elige un número del menú:\n\n");
     printf("1 Cargar el fichero\n");
     printf("2 Guardar en un fichero\n");
     printf("3 Mostrar datos\n");
     printf("0 Para salir\n\n");
     printf("Opcion: ");
     printf("Has elegido: %c",getchar());
*/

    setlocale(LC_CTYPE, "Spanish");
    int i;
     cout<<"Elige un número del menú:\n\n";
     cout<<"1 Cargar el fichero\n";
     cout<<"2 Guardar en un fichero\n";
     cout<<"3 Mostrar datos\n";
     cout<<"0 Para salir\n\n";
     cout<<"Opcion: ";
     cin>>i;
     cout<<"Has elegido: "<<i;

return 0;
}
