#include<iostream>
#include<clocale>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"Spanish");

int x;

cout<<"Digite un número entero: "; cin>>x;

    if(x%3==0){
        cout<<"El número es múltiplo de 3";
    }
        else{
            cout<<"El número no es múltiplo de 3";
        }

return 0;
}
