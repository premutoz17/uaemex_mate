#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

setlocale(LC_CTYPE , "Spanish");

int a, b;

cout<<"Digite un a�o: "; cin>>a;
cout<<"Digite un mes (n�mero): "; cin>>b;

    if (a%4==0&&a%100!=0||a%400==0){
        cout<<"El a�o es bisiesto"<<endl;
            switch (b){
                case 1: cout<<"Enero tiene 31 d�as"; break;
                case 2: cout<<"Febrero tiene 29 d�as"; break;
                case 3: cout<<"Marzo tiene 31 d�as"; break;
                case 4: cout<<"Abril tiene 30 d�as"; break;
                case 5: cout<<"Mayo tiene 31 d�as"; break;
                case 6: cout<<"Junio tiene 30 d�as"; break;
                case 7: cout<<"Julio tiene 31 d�as"; break;
                case 8: cout<<"Agosto tiene 31 d�as"; break;
                case 9: cout<<"Septiembre tiene 30 d�as"; break;
                case 10: cout<<"Octubre tiene 31 d�as"; break;
                case 11: cout<<"Noviembre tiene 30 d�as"; break;
                case 12: cout<<"Diciembre tiene 31 d�as"; break;
                default: cout<<"ERROR: Mes incorrecto";
            }
    }
        else{
            cout<<"El a�o no es bisiesto"<<endl;
            switch (b){
                case 1: cout<<"Enero tiene 31 d�as"; break;
                case 2: cout<<"Febrero tiene 28 d�as"; break;
                case 3: cout<<"Marzo tiene 31 d�as"; break;
                case 4: cout<<"Abril tiene 30 d�as"; break;
                case 5: cout<<"Mayo tiene 31 d�as"; break;
                case 6: cout<<"Junio tiene 30 d�as"; break;
                case 7: cout<<"Julio tiene 31 d�as"; break;
                case 8: cout<<"Agosto tiene 31 d�as"; break;
                case 9: cout<<"Septiembre tiene 30 d�as"; break;
                case 10: cout<<"Octubre tiene 31 d�as"; break;
                case 11: cout<<"Noviembre tiene 30 d�as"; break;
                case 12: cout<<"Diciembre tiene 31 d�as"; break;
                default: cout<<"ERROR: Mes incorrecto";
            }
            }
return 0;
}

