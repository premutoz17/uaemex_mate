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
sumx=0;
sumx2=0;
sumy=0;
sumxy=0;
st=0;
sr=0;
    for i=1:n
        sumx=sumx+x(1,i);
        sumy=sumy+y(1,i);
        sumxy=sumxy+x(1,i)*y(1,i);
        sumx2=sumx2+x(1,i).^2;
    end
xm=sumx/n;
ym=sumy/n;
a1=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
a0=ym-a1*xm;
    for i=1:n
        st=st+(y(1,i)-ym)^2;
        sr=sr+(y(1,i)-a1*x(1,i)-a0)^2;
    end
fprintf('\n   xi            yi         (yi-ym)^2     (yi-a0-a1xi)^2\n')
    for i=1:n
        p=(y(1,i)-ym)^2;
        q=(y(1,i)-a0-a1*x(1,i))^2;
        fprintf('\n%f      %f      %f        %f',x(1,i),y(1,i),p,q)
    end
f=a1*x+a0;
hold on;
plot(x,y,'--ro')%graficamos puntos
plot(x,f)%graficamos recta por regrsion
grid on
title('Rectita y puntitos')
xlabel('Eje x')
ylabel('Eeje y')
fprintf('\n\nFin. Chaito.\n\n');