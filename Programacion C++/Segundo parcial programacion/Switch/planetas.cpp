#include<iostream>
#include<stdlib.h>
#include<clocale>

using namespace std;

main(){

setlocale(LC_CTYPE , "Spanish");
system("COLOR 2");

int a;

cout<<"1. mercurio\n";
cout<<"2. venus\n";
cout<<"3. tierra\n";
cout<<"4. marte\n";
cout<<"5. jupiter\n";
cout<<"6. saturno\n";
cout<<"7. urano\n";
cout<<"8. neptuno\n";
cout<<"9. pluton\n";

cout<<"Digite un número del listado: "; cin>>a;

 switch (a){

 case 1: cout<<" la distacnia del sol al planeta es 59 millones de kilometros "; break;
 case 2: cout<<"la distacnia del sol al planeta es 108 millones de kilometros"; break;
 case 3: cout<<"la distacnia del sol al planeta es 150 millones de kilometros"; break;
 case 4: cout<<"la distacnia del sol al planeta es 228 millones de kilometros"; break;
 case 5: cout<<"la distacnia del sol al planeta es 750 millones de kilometros"; break;
 case 6: cout<<"la distacnia del sol al planeta es 1431 millones de kilometros"; break;
 case 7: cout<<"la distacnia del sol al planeta es 2877 millones de kilometros"; break;
 case 8: cout<<"la distacnia del sol al planeta es 4509 millones de kilometros"; break;
 case 9: cout<<"la distacnia del sol al planeta es 5916 millones de kilometros"; break;

 default: cout<<" palneta incorrecto"; break;

 }


	return 0;
}
