clc;
clear all;
syms x;
n=input('Ingrese el numero de puntos: ');
xi=input('Ingrese el valor a interpolar: ');
    for i=1:n
        x(i,1)=input ('Componentes en x: ');
        i=i+1;
    end
    for i=1:n
        y(i,1)=input ('Componentes en y (y=f(x)): ');
        i=i+1;
    end
fdd=zeros(n);%matriz de ceros nxn.
fdd(:,1)=y(:);%la columna uno de la matriz de ceros se llenan con los valores del vector y.
%hacemos las diferencias divididas.
    for j=1+1:n %j=2 puesto que la primer columna se lleno con el vector y.
        for i=0+1:n-j+1
            fdd(i,j)=(fdd(i+1,j-1)-fdd(i,j-1))/(x(i+j-1)-x(i));
        end 
    end
plot(x,y,'b',x,y,'r*')%gráfica 
grid on
title('Grafiquita')
xlabel('Eje x')
ylabel('Eje y')
%calcular el dato interpolado.
xterm=1;
yi=fdd(1,1);
    for j=1:n-1
        xterm=xterm.*(xi-x(j));%xi valor interpolado.
        yint2=yi+fdd(1,j+i)*xterm;
        ea=yint2-yi;
        yi=yint2;
    end
fprintf('El valor interpolado es: %f\n',yi)    
