#include <stdio.h>
#include<stdlib.h>
int main()
{int m,n,f,c,i,j,k;
system("COLOR 2");
float A[3][3],B[3][3],C[3][3];
n=f;
if (n==f)
printf("Digite los valores de la primera matriz\n\n");

for (i=1;i<=3;i++)
 for (j=1;j<=3;j++)
{ printf("A(%d,%d)= ",i,j);
   scanf ("%f",&A[i][j]);
}

printf("\nDigite los valores de la segunda matriz\n\n");
  for (i=1;i<=3;i++)
   for (j=1;j<=3;j++)
    { printf("B(%d,%d)= ",i,j);
      scanf ("%f",&B[i][j]);
    }

 for (i=1;i<=3;i++)
    {for (j=1;j<=3;j++)
       { C[i][j]=0;
         for (k=1;k<=3;k++)
          {C[i][j]=C[i][j]+A[i][k]*B[k][j];
          }
       }
    }
 printf("\nLa multiplicacion es:\n\n");

  for (i=1;i<=3;i++)
   for (j=1;j<=3;j++)
    { printf("C(%d,%d)=\t%4.2f\n",i,j,C[i][j]);
    }

getchar();
}
