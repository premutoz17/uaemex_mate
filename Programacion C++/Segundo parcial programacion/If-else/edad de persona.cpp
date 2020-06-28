#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double n, m, s;

cout<<"Digite una edad: ";
cin>>n;

if(n==0 || n==1){
cout<<"Es un bebé";
}

if(n>=2 && n<=12){
cout<<"Es un niño";
}

if(n>=13 && n<=17){
cout<<"Es un adolescente";
}

if(n>=31 && n<=64){
cout<<"Es un adulto";
}

if(n>=65 && n<=120){
cout<<"Es un anciano";
}

if(n>=120 || n<0){
cout<<"Error";
}
return 0;
}
