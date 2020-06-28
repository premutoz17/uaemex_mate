#include<iostream>

using namespace std;

int main(){

char c;

cout<<"Digite una letra del abecedario: "; cin>>c;

    if(c=='a' || c=='e' || c=='i' || c=='o' || c== 'u' || c=='A' || c=='E' || c=='I' || c=='O' || c== 'U'){
        cout<<"La letra es una vocal";
    }
        else {
            cout<<"La letra no es vocal";
        }

return 0;
}
