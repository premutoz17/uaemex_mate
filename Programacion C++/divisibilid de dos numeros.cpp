#include <stdio.h>

int main (){

int c,n,m,decision;

printf("Este programa determina si un numero entero n es divisible por otro numero m.");
printf("\n¿Quiere realizar una comprobacion? Digite 1 para si y 0 para no: ");
scanf("%i",&decision);

    while(decision>1 || decision<0){
        printf("\nSelecciones una opcion valida. ¿Quiere realizar una comprobacion? Digite 1 para si y 0 para no: ");
        scanf("%i",&decision);
    }

    while (decision==1){

        printf("\n\nDigite el numero n: ");
        scanf("%i",&n);
        printf("Digite el numero m: ");
        scanf("%i",&m);
        c=n/m;
            if (n%m==0){
                printf("\nEl numero n si es divisible por m, y su cociente es n/m=%i\n",c);
                printf("\n¿Quiere realizar otra comprobacion?: ");
                scanf("%i",&decision);
                    while(decision>1 || decision<0){
                        printf("\nSelecciones una opcion valida. ¿Quiere realizar una comprobacion? Digite 1 para si y 0 para no: ");
                        scanf("%i",&decision);
                    }
            }
            else{
                printf("\nEl numero n no es divisible por m.\n");
                printf("\n¿Quiere realizar otra comprobacion?: ");
                scanf("%i",&decision);
                    while(decision>1 || decision<0){
                        printf("\nSelecciones una opcion valida. ¿Quiere realizar una comprobacion? Digite 1 para si y 0 para no: ");
                        scanf("%i",&decision);
                    }
            }

    }
return 0;
}
