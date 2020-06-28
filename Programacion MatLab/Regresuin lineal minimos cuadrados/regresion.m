clc;
clear all;
syms x;
n=input('Ingrese el numero de puntos: ');
    for i=1:n
        x(1,i)=input ('Componentes en x: ');
        i=i+1;
    end
    for i=1:n
        y(1,i)=input ('Componentes en y: ');
        i=i+1;
    end
sumx=0;%es la suma de todas las coordenadas en x, se inicia en 0
sumx2=0;%es la suma de todas las coordenadas en x al cuadrado, se inicia en 0
sumy=0;%es la suma de todas las coordenadas en y, se inicia en 0
sumxy=0;%es la suma de todas del producto de todos los x e y
st=0;%error estandar
sr=0;
    for i=1:n %este for hace las sumas definidas anteriormente
        sumx=sumx+x(1,i);
        sumy=sumy+y(1,i);
        sumxy=sumxy+x(1,i)*y(1,i);
        sumx2=sumx2+x(1,i).^2;
    end
xm=sumx/n;%la media de la sumatoria de las coordenadas en x
ym=sumy/n;%la media de la sumatoria de las coordenadas en y
a1=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
a0=ym-a1*xm;
    for i=1:n %este for determina errores
        st=st+(y(1,i)-ym)^2;
        sr=sr+(y(1,i)-a1*x(1,i)-a0)^2;
    end
fprintf('\n   xi            yi         (yi-ym)^2     (yi-a0-a1xi)^2\n')
    for i=1:n
        p=(y(1,i)-ym)^2;%(yi-ym)^2
        q=(y(1,i)-a0-a1*x(1,i))^2;%(yi-a0-a1xi)^2
        fprintf('\n%f      %f      %f        %f',x(1,i),y(1,i),p,q)
    end
f=a1*x+a0;%recta obtenida
hold on;
plot(x,y,'--ro')%graficamos puntos
plot(x,f)%graficamos recta por regrsion
grid on
title('Rectita y puntitos')
xlabel('Eje x')
ylabel('Eeje y')
fprintf('\n\nLa recta que se ajusta al modelo es: y=%fx+%f\n\n',a1,a0);
fprintf('\n\nFin. Chaito.\n\n');
