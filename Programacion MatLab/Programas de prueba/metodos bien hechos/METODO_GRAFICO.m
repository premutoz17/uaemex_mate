fprintf('METODO GRAFICO')
syms x y;

f=input('\n Ingrese la funcion: \n');
a1=input('\n Ingrese el intervalo inferior: \n');
b1=input('\n Ingrese el intervalo superior: \n');
t=linspace(a1,b1,100);
plot(t,subs(f,t),'g -')
grid on 
title('Metodo grafico')
xlabel('Eje x')
ylabel('Eje y')