#include <stdio.h>

int main (){

int i,i1,n,fact=1;

printf("Digite un numero para calcular su factorial: ");
scanf("%i",&n);

//Mediante el bucle for
    for(i1=1;i1<=n;i1++)
    {
    fact=fact*i1;
    }

printf("\nEl resultado con el bucle for es %i!=%i",n, fact);

//Mediante el bucle while
    while (i<=n)
    {
    fact=fact*i;
    i++;
    }
printf("\nEl resultado con el bucle while es %i!=%i\n",n, fact);

return 0;
}
