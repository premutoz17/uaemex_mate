//Pies a metros
//1 pie= 0.3084 metros
#include<stdio.h>
#include<iostream>

using namespace std;

int main (){

    /*
    float pies, metros;
    printf("Introduzca su medicion en pies: ");
    scanf("%f",&pies);
    metros=pies*0.3084;
    printf("\n%f metros equivalen a %.2f pies\n",pies, metros);
    */

    float pies, metros;
    cout<<"Introduzca su medicion en pies: ";
    cin>>pies;
    metros=pies*0.3084;
    cout<<pies<<" pies equivalen a "<<metros<<endl;

return 0;
}
