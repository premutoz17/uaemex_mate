#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

setlocale(LC_CTYPE , "Spanish");

int a, b;

cout<<"Digite un año: "; cin>>a;
cout<<"Digite un mes (número): "; cin>>b;

    if (a%4==0&&a%100!=0||a%400==0){
        cout<<"El año es bisiesto"<<endl;
            switch (b){
                case 1: cout<<"Enero tiene 31 días"; break;
                case 2: cout<<"Febrero tiene 29 días"; break;
                case 3: cout<<"Marzo tiene 31 días"; break;
                case 4: cout<<"Abril tiene 30 días"; break;
                case 5: cout<<"Mayo tiene 31 días"; break;
                case 6: cout<<"Junio tiene 30 días"; break;
                case 7: cout<<"Julio tiene 31 días"; break;
                case 8: cout<<"Agosto tiene 31 días"; break;
                case 9: cout<<"Septiembre tiene 30 días"; break;
                case 10: cout<<"Octubre tiene 31 días"; break;
                case 11: cout<<"Noviembre tiene 30 días"; break;
                case 12: cout<<"Diciembre tiene 31 días"; break;
                default: cout<<"ERROR: Mes incorrecto";
            }
    }
        else{
            cout<<"El año no es bisiesto"<<endl;
            switch (b){
                case 1: cout<<"Enero tiene 31 días"; break;
                case 2: cout<<"Febrero tiene 28 días"; break;
                case 3: cout<<"Marzo tiene 31 días"; break;
                case 4: cout<<"Abril tiene 30 días"; break;
                case 5: cout<<"Mayo tiene 31 días"; break;
                case 6: cout<<"Junio tiene 30 días"; break;
                case 7: cout<<"Julio tiene 31 días"; break;
                case 8: cout<<"Agosto tiene 31 días"; break;
                case 9: cout<<"Septiembre tiene 30 días"; break;
                case 10: cout<<"Octubre tiene 31 días"; break;
                case 11: cout<<"Noviembre tiene 30 días"; break;
                case 12: cout<<"Diciembre tiene 31 días"; break;
                default: cout<<"ERROR: Mes incorrecto";
            }
            }
return 0;
}

