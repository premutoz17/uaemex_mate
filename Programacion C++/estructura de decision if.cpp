#include<stdio.h>
#include<conio.h>
#include<clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    int num;
    printf("Introduce un numero: ");
    scanf("%i",&num);

        if (num==10)
            printf("El número es correcto");
        else
            printf("El numero no es correcto");

    return 0;
    }
