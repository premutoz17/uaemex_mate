#include<iostream>
#include<clocale>

using namespace std;

int main(){
	setlocale(LC_CTYPE,"Spanish");

int x,y,s,c;

cout<<"Digite el primer número: "; cin>>x;
cout<<"Digite el segundo número: "; cin>>y;
cout<<"Digite la suma de "; cout<<x; cout<<" y "; cout<<y; cout<<": "; cin>>s;

c=x+y;

    if(s==c){
        cout<<"La suma es correcta";
    }
        else{
            cout<<"La suma es incorrecta, la respuesta correcta es: "; cout<<c;
        }


return 0;
}
