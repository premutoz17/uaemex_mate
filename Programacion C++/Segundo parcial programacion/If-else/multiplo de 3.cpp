#include<iostream>
#include<clocale>

using namespace std;

int main(){
	
	setlocale(LC_CTYPE,"Spanish");

int x;

cout<<"Digite un n�mero entero: "; cin>>x;

    if(x%3==0){
        cout<<"El n�mero es m�ltiplo de 3";
    }
        else{
            cout<<"El n�mero no es m�ltiplo de 3";
        }

return 0;
}
