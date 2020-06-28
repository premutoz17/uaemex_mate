#include<stdio.h>
#include<conio.h>
#include<clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    float num;
    printf("Introduce un numero: ");
    scanf("%f",&num);

        if (num<10)
            printf("El número es menor que 10");
                if(num>10 && num<100)
                    printf("El número está entre 10 y 100");
        else if (num>100)
            printf("Pusiste un número mayor a 100");

    printf("\nFin del programa\n");

return 0;
}

