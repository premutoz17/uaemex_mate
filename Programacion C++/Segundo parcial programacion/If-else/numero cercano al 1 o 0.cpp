#include<iostream>
#include<clocale>


using namespace std;

int main(){

setlocale(LC_CTYPE, "Spanish");

double n, m, s;

cout<<"Digite un n�mero: ";
cin>>n;

    if (0.5<n){
        cout<<"El n�mero que digit� est� m�s cerca de 1.";
    }


    if(0.5>n){
        cout<<"El n�mero que digit� est� m�s cerca de 0.";
    }
    
    if(0.5==n){
    	cout<<"El n�mero est� a la misma distancia del 0 y el 1";
	}

return 0;
}
