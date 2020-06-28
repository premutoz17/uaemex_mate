function r=newtonR(f)
fprintf('Introduzca el intervalo [a,b] para la grafica\n');
x1=input('ingrese el valor de a: ');
xu=input('ingrese el valor de b: ');
t=linspace(x1,xu,500);
plot(t,subs(f,t),'b')
title('Gráfica NEWTON RAPHSON','color','m')
xlabel('Eje X')
ylabel('Eje Y')
grid on
x0=input('Ingrese el valor inicial: ');
tol=input('Ingrese el porcentaje de error: ');
i=1;
fx(i)=x0;
syms x;
f1=subs(f,x,fx(i));
z=diff(f);
d=subs(z,x,fx(i));
 
ea(1)=100;
 
while abs(ea(i))>=tol;
    fx(i+1)=fx(i)-f1/d; f1=subs(f,x,fx(i+1)); d=subs(z,x,fx(i+1));
    ea(i+1)=abs((fx(i+1)-fx(i))/fx(i+1)*100);
    i=i+1;
end
fprintf('i     fx(i)         Error aprox (i) \n');
for j=1:i;
    fprintf('%2d \t %11.7f \t %7.3f \n',j-1,fx(j),ea(j));
end