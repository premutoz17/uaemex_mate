function r=secante(f)
fprintf('Introduzca el intervalo [a,b] para la grafica\n');
xl=input('ingrese el valor de a: ');
xu=input('ingrese el valor de b: ');
t=linspace(xl,xu,1000);
plot(t,subs(f,t),'b')
title('METODO DE LA SECANTE','color','m')
xlabel('Eje X')
ylabel('Eje Y')
grid on
fx(1)=input('Ingrese el intervalo inferior: ');
fx(2)=input('Ingrese el intervalo superior: ');
etol=input('Ingrese el error: ');
i=1;
syms x;
f1=subs(f,x,fx(1));
f2=subs(f,x,fx(2));
 
ea(1)=100;
 i=1;
j=2;
while abs(ea(i))>=etol;
     fx(j+1)=(fx(j-1)*f2-fx(j)*f1)/(f2-f1);  f1=f2; f2=subs(f,x,fx(j+1));
   ea(i+1)=(fx(j+1)-fx(j))/fx(j+1)*100;
   j=j+1;
   i=i+1; 
end
fprintf('i     fx(i)\n');
%fprintf('%2d\t%.5f\t\n',0,x(1));
for k=2:j;
     fprintf('%2d \t %.5f\n',k-1,fx(k));
   
end