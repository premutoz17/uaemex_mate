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
            if (s==59 && m<59 && h<23){
                cout<<"La hora un segundo despues es: " <<h <<":" <<m+1 <<":" <<"00";
            }
            if(s<59 && m<59 && h<23){
                cout<<"La hora un segundo despues es: " <<h <<":" <<m <<":" <<s+1;
            }
            if(h==23 && m==59 && s==59){
                cout<<"La hora un segundo despues es: 00:00:00";
            }
            if(m==59 && s==59){
                cout<<"La hora un segundo despues es: " <<h+1 <<":" <<"00" <<":" <<"00";
            }
    }
    else{
        cout<<"Hora incorrecta";
    }

return 0;
}
