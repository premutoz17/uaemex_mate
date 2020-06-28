#include<iostream>
#include<clocale>
using namespace std;

int main(){
setlocale(LC_CTYPE, "Spanish");

int a, n, sum, sum0, product;
char s, b;
s='s';

	while (s=='s'){
		cout<<"Digite un número impar entre el 1 y el 19: ";
		cin>>n;
		if(n%2==0){
			cout<<"El número es par.";
			cout<<"\n¿Quiere realizar otra operación?(s/n): ";
		    cin>>s;
		}
		else{
		cout<<"\nSeleccione una opción del menú:\n\n1. Calcular la serie 1+3+5+...+n\n\n2. Calcular la serie 1*3*5*...*n\n\nOpción: ";
		cin>>a;
		sum=0;
		product=1;
		    switch(a){
		        case 1:{
		            int v[10]={1,3,5,7,9,11,13,15,17,19};
		                for(int i=0;i<=n/2;i++){
		                    sum=sum+v[i];
		                }
		                cout<<"La suma es: "<<sum;
		                cout<<"\nQuiere realizarlo con el producto?(s/n): ";//
		                cin>>b;//
		                	if (b=='s'){
		                		int v[10]={1,3,5,7,9,11,13,15,17,19};
		                		for(int i=0;i<=n/2;i++){
		                    		product=product*v[i];
		                		}
		                cout<<"El producto es: "<<product;
							}
		        }
		           break;
		        case 2:{
		            int v[10]={1,3,5,7,9,11,13,15,17,19};
		                for(int i=0;i<=n/2;i++){
		                    product=product*v[i];
		                }
		                cout<<"El producto es: "<<product;
		                cout<<"\nQuiere realizarlo con la suma?(s/n): ";//
		                cin>>b;//
		                	if (b=='s'){
		                	int v[10]={1,3,5,7,9,11,13,15,17,19};
		                for(int i=0;i<=n/2;i++){
		                    sum=sum+v[i];
		                }
		                cout<<"La suma es: "<<sum;
							}
		        }
		                    break;
		    }
		cout<<"\n¿Quiere realizar otra operación?(s/n): ";
		cin>>s;
	}
}
return 0;
}

