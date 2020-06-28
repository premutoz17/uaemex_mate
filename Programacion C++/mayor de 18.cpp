#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");

    float num;
    cout<<("Introduce tu edad: ");
    cin>>num;

        if (num>=18)
            cout<<("Puedes acceder");
        else
            cout<<("No puedes acceder");

    cout<<"\nFin del programa\n";

return 0;
}
