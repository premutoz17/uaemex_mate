clear all;
clc;
syms x;
f=input('Ingrese la primer funcion en t�rminos de x: ');
g=input('Ingrese la segunda funcion en t�rminos de x: ');
a=input('Ingrese el intervalo inferior: ');
b=input('Ingrese el intervalo superior: ');
t=linspace(a,b,200);
grid on;
hold on;
plot(t,subs(f,t),'b -')
plot(t,subs(g,t),'g *')
title('Gr�fiquita','color','r')
xlabel('Eje x')
ylabel('Eje y')