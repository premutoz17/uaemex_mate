#include <iostream>
#include<stdlib.h>
using namespace std;
void traza (float A[3][3]);
void determinante (float A[3][3]);

int main()
{
	system("COLOR 2");
    float A[3][3];
    int i,j;
    cout << "Introduce la matriz: ";
    for(i=0;i<3;i++)
    {
        cout << "Introduce la fila "<<i+1<<": ";
        for (j=0;j<3;j++)
        {
            cin >> A[i][j];
        }
    }
    traza (A);
    determinante(A);
    return 0;
}

void traza(float A[3][3])
{
    int t;
    t=A[1][1]+A[2][2]+A[0][0];
    cout << "La traza es: "<< t<< endl;
}

void determinante(float A[3][3])
{
    int det, pos, neg;
    pos=(A[0][0]*A[1][1]*A[2][2])+(A[1][0]*A[2][1]*A[0][2])+(A[0][1]*A[1][2]*A[2][0]);
    neg=(A[0][2]*A[1][1]*A[2][0])+(A[1][2]*A[2][1]*A[0][0])+(A[0][1]*A[1][0]*A[2][2]);
    det=pos-neg;
    cout << "El determinante es: "<<det<<endl;
}
