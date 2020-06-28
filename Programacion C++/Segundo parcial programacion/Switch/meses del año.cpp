#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

setlocale(LC_CTYPE , "Spanish");
int m;
cout<<"Digite un número asociado a un mes: ";
cin>>m;
if (m>=1 && m<=12){
switch (m){
case 1: cout<<"Enero"; break;
case 2: cout<<"febrero"; break;
case 3: cout<<"Marzo"; break;
case 4: cout<<"Abril"; break;
case 5: cout<<"Mayo"; break;
case 6: cout<<"Junio"; break;
case 7: cout<<"Julio"; break;
case 8: cout<<"Agosto"; break;
case 9: cout<<"Septiembre"; break;
case 10: cout<<"Octubre"; break;
case 11: cout<<"Noviembre"; break;
case 12: cout<<"Diciembre"; break;
}
}
else{
cout<<"Error, mes incorrecto";
}

	return 0;
}
