#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	system("COLOR 2");
int  A[3][3],B[3][3],C[3][3];
  for( int i=0;i<3;i++){
     for(int j=0;j<3;j++){
            cout<<"Digite la entrada "<<"A["<<i+1<<"]["<<j+1<<"]: ";
            cin>>A[i][j];
      }
  }
   for( int i=0;i<3;i++){
      for(int j=0;j<3;j++){
            cout<<"Digite la entrada "<<"B["<<i+1<<"]["<<j+1<<"]: ";
            cin>>B[i][j];
      }
   }
 for( int i=0;i<3;i++){
     for(int j=0;j<3;j++){
            C[i][j]=A[i][j]+B[i][j];
      }
 }
 cout<<"Las suma de las matrices es: "<<endl;

 cout<<C[0][0]<<"   "<<C[0][1]<<"  "<<C[0][2]<<endl;
 cout<<C[1][0]<<"  "<<C[1][1]<<" "<<C[1][2]<<endl;
 cout<<C[2][0]<<" "<<C[2][1]<<" "<<C[2][2]<<endl;


}
