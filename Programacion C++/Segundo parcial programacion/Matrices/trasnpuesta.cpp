#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int main(int argc, char** args)
{
	system("COLOR 2");
int matriz[MAX][MAX], col, reng, i=0, j=0;
col=2;
reng=2;
  for(i = 0;i < reng;i++)
  {
      for(j = 0;j < col;j++){
          printf("Digite los valores [%d][%d]: ", i+1, j+1);
              scanf("%d", &matriz[i][j]);
      }
  }
  printf("La matriz es: ");
  printf("\n\n");
  for(i = 0;i < reng;i++){
      printf("\n\t\t");
      for(j = 0;j < col;j++){
          printf("  %6d  ", matriz[i][j]);
          }
  }
  printf("\n\nSu matriz transpuesta es: ");
  printf("\n\n");
  for(i = 0;i < col;i++){
      printf("\n\t\t");
      for(j = 0;j < reng;j++){
          printf("  %6d  ", matriz[j][i]);
          }
  }
  printf("\n\n\n");
    }
