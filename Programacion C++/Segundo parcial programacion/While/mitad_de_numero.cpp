#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
setlocale (LC_CTYPE, "Spanish");
	
int i;
float x, n;
cout<<"\nIntroduzca un n�mero: ";
cin>>x;
i=0;
while (x<0 || x>0)
{
n=x/2;
cout<<"\n\tLa mitad de "<<x<<" es: "<<n<<"\n";
cout<<"\nIntroduzca un n�mero: ";
cin>>x;
i++;
}
if (x==0)
{
cout<<"\n\tEl n�mero es igual a cero.";
cout<<"\n\tLos n�meros introducidos distintos de cero fueron: "<<i;
}
	
	return 0;
}
