#include<iostream>
#include<conio.h>
#include<clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Spanish");
  cout << "\'Mañana"<<endl;
  cout << "Niños, \t mañana"<<endl;
  cout << "Todavía, \rsí"<<endl;
  cout << "Más "<<endl;
  cout << "Operación,\v Reunión"<<endl;

  return 0;
}
