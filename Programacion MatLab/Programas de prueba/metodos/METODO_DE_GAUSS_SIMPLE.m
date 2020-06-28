%METODO DE GAUSS SIMPLE
clc;  
clear all;
n=input('Ingrese el n�mero de ecuaciones: ');
disp('Ingrese los coeficientes de las ecuaciones: ');
for i=1:n
for j=1:n
fprintf('A (%d,%d): ',i,j);
A(i,j)=input('');
end
end 
disp('Ingrese los resultados de las ecuaciones: ');
for k=1:n
fprintf('A (%d,%d): ',k,n+1);
A(k,n+1)=input('');
end

disp('La matriz ampliada que se form� es la siguiente: ');
A=A

disp('A continuaci�n de realizar� la eliminacion hacia adelante. ');
x=1;
while(x<n)
for s=1:n-1
for l=x:n-1
A(l+1,:)=A(s,:)*(-A(l+1,s)/A(s,s))+A(l+1,:);
end
x=x+1;
end
end
disp('La matriz resultado que se form� fue la siguiente: ')
A=A
X(n)=A(n,n+1)/A(n,n);
for h=n-1:-1:1
S=A(h,n+1);
for f=n:-1:1
S=S-A(h,f)*X(f);
end
S=S/A(h,h);
X(h)=S;
end
disp('Resultados:')
for r=1:n
fprintf('X%d = %f\n ',r,X(r));
end
