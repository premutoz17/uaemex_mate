clc;
clear all;
syms x;
n=input('Ingrese el numero de puntos: ');
    for i=1:n
        x1(1,i)=input ('Valores de x1: ');
        i=i+1;
    end
    for i=1:n
        x2(1,i)=input ('Valores x2: ');
        i=i+1;
    end
    for i=1:n
        y(1,i)=input ('Valores de y (y=f(x1,x2)): ');
        i=i+1;
    end
sumx1=0;
sumx2=0;
sumx1e2=0;%es la suma de todas las coordenadas en x al cuadrado, se inicia en 0
sumx2e2=0;
sumx1x2=0;
sumy=0;%es la suma de todas las coordenadas en y, se inicia en 0
sumx1y=0;%es la suma de todas del producto de todos los x e y
sumx2y=0;
    for i=1:n %este for hace las sumas definidas anteriormente
        sumx1=sumx1+x1(1,i);%
        sumx2=sumx2+x2(1,i);%
        sumy=sumy+y(1,i);%
        sumx1x2=sumx1x2+x1(1,i)*x2(1,i);%
        sumx1y=sumx1y+x1(1,i)*y(1,i);%
        sumx2y=sumx2y+x2(1,i)*y(1,i);%
        sumx1e2=sumx1e2+x1(1,i).^2;%
        sumx2e2=sumx2e2+x2(1,i).^2;%
    end
M=[n,sumx1,sumx2;sumx1,sumx1e2,sumx1x2;sumx2,sumx1x2,sumx2e2];
B=[sumy;sumx1y;sumx2y];
X=M^(-1)*B;
X