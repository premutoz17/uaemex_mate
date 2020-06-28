#include<iostream>
#include<clocale>

using namespace std;
/*
int main(){

	setlocale(LC_CTYPE,"Spanish");

char x;

cout<<"Digite un dato: "; cin>>x;

if(x<='9'&& x>='0'){
    cout<<"El dato es un numero";
}
else{
    cout<<"El dato es una letra";
}
return 0;
}
*/

int main(){

	setlocale(LC_CTYPE,"Spanish");

char x;

cout<<"Digite un dato: "; cin>>x;

if(x<=57 && x>=48){
    cout<<"El dato es un numero";
}
else{
    cout<<"El dato es una letra";
}
return 0;
}
