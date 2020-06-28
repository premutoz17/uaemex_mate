#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<clocale>
#include<math.h>

using namespace std;

int main(){

    setlocale(LC_CTYPE, "Spanish");

    double a,b,c,x_1,x_2,x_0,x_4,discriminante;

    cout<<("Digite los valores de los coeficientes a, b y c de una ecuación de la forma ax²+bx+c=0.\n");
    cout<<("\nIngresa el valor de a: ");
    cin>>a;
    cout<<("Ingresa el valor de b: ");
    cin>>b;
    cout<<("Ingresa el valor de c: ");
    cin>>c;

    discriminante=b*b-4*a*c;
    x_0=-b/(2*a);
    x_1=((-b+sqrt(discriminante))/(2*a));
    x_2=((-b-sqrt(discriminante))/(2*a));
    x_4=(sqrt(-discriminante))/(2*a);

        if (discriminante==0) {
            cout<<("\nLa solución es: ")<<x_0<<endl;
        }
        if (discriminante>0) {
            cout<<("\nLas soluciones son: ")<<x_1<<(" y ")<<x_2<<endl;
        }
        if (discriminante<0){
            cout<<("\nLas soluciones son: ")<<x_0<<("+")<<x_4<<("i")<<(" y ")<<x_0<<("-")<<x_4<<("i")<<endl;
        }

return 0;
}
