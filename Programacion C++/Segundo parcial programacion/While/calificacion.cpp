#include<iostream>
#include<clocale>
#include<stdlib.h>
using namespace std;
int main ()
{
setlocale (LC_CTYPE, "Spanish");
	
float n;
cout<<"\nIngrese la nota de una asignatura: ";
cin>>n;
while (n<0 || n>10)
{
cout<<"\n\tError, nota incorrecta.\n";
cout<<"\nIngrese la nota de una asignatura: ";
cin>>n;
}
if (n>=5)
{
cout<<"\n\tAPROBADO";
}
if (n<5)
{
cout<<"\n\tSUSPENDIDO";
}
					
	return 0;
}
