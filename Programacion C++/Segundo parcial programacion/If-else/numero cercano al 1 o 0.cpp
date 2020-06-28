#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double n, m, s;

cout<<"Digite un número: ";
cin>>n;

    if (0.5<n){
        cout<<"El número que digitó está más cerca de 1.";
    }


    if(0.5>n){
        cout<<"El número que digitó está más cerca de 0.";
    }
    
    if(0.5==n){
    	cout<<"El número está a la misma distancia del 0 y el 1";
	}

return 0;
}
