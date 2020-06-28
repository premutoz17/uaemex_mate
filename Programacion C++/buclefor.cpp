#include <iostream>
using namespace std;

int main(){

int i=1, suma=0;
for( i=1; i<=5; ) // forma 1
{
suma += i;
++i;
}
cout << "\n\t suma 1 = " << suma << endl;
suma=0;
for(i=1; i<=5; ++i) // forma 2
suma += i;
cout << "\n\t suma 2 = " << suma << endl;
for(i=1, suma=1; i<5; ++i, suma+=i); // forma 3
cout << "\n\t suma 3 = " << suma << endl;
for(i=1, suma=0; i<=5; suma+=i, ++i); // forma 4
cout << "\n\t suma 4 = " << suma << endl;



return 0;
}
