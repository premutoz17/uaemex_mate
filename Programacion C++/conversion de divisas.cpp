#include<stdio.h>

int main (){

    float p, e, d, o;

    printf("Seleccione el par de divisas\n\n");
    printf("1. Pesos a dolares\n");
    printf("2. Dolares a pesos\n");
    printf("3. Pesos a euros\n");
    printf("4. Euros a pesos\n\n");
    scanf("%f",&o);

    if(o==1)
        {printf("Digite el valor en pesos mexicanos: ");
        scanf("%f",&p);
        d=p/20.14;
        printf("La equivalencia en dolares es %f dolares",d);}

    if(o==2)
        {printf("Digite el valor en dolares: ");
        scanf("%f",&d);
        p=d*20.14;
        printf("La equivalencia en pesos es %f pesos",p);}

    if(o==3)
        {printf("Digite el valor en pesos: ");
        scanf("%f",&p);
        e=p/22.28;
        printf("La equivalencia en euros es %f euros",e);}

    if(o==4)
        {printf("Digite el valor en euros: ");
        scanf("%f",&e);
        p=e*22.28;
        printf("La equivalencia en pesos es %f pesos",p);}

return 0;
}
