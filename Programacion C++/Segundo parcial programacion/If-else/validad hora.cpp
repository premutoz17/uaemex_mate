#include<iostream>
#include<clocale>

using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

int h, m, s;

cout<<"Introduza horas: ";
cin>>h;
cout<<"Introduza minutos: ";
cin>>m;
cout<<"Introduza segundos: ";
cin>>s;

    if(h>=0 && h<=23 && m>=0 && m<=59 && s>=0 && s<=59){
        cout<<"La hora es correcta";
    }
    else{
        cout<<"Hora incorrecta";
    }

return 0;
}
