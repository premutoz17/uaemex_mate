%{
Escriba en la ventana de comandos "syms x", luego en otra linea escriba
"f=(su funcion en termimos de x)". Finalmente en una tercera linea 
escriba "newtonraphson(f)"
%}

function r=newtonraphson(f)
clc;
fprintf('Introduzca el intervalo [a,b] para graficar.\n');
x1=input('Ingrese el valor de a: ');
xu=input('Ingrese el valor de b: ');
t=linspace(x1,xu,500);
plot(t,subs(f,t),'b')
title('Gráfica')
xlabel('Eje x')
ylabel('Eje y')
grid on
fprintf('\nObserve bien la grafica y elja un valor inicial para x0,\n');
fprintf('tal que no este cerca de un mínimo o máximo local.');
x0=input('\n\nIngrese el valor inicial x0: ');
n=input('Ingresa el nùmero de las cifras significativas para calcular (es): ');
es=(0.5*(10^(2-n)));
imax=input('Ingrese el número de iteraciones que desea realizar: ');
i=1;
fx(i)=x0;
syms x;
f1=subs(f,x,fx(i));
z=diff(f);
z2=diff(z);
vz2=subs(z2,x0);
    if(vz2==0)
        fprintf('La segunda derivada de la funcion evaluada en el valor inicial x0 es igual a cero\nelija otro punto inicial')
       return
    end
d=subs(z,x,fx(i));
ea=100;
    while (abs(ea>=es) | i==imax);
        fx(i+1)=fx(i)-f1/d; f1=subs(f,x,fx(i+1)); d=subs(z,x,fx(i+1));
        ea(i+1)=abs((fx(i+1)-fx(i))/fx(i+1)*100);
        i=i+1;
    end
fprintf('\nIteracion      xi        Error ea      Valor de (es)\n');
    for j=1:i;
        fprintf('%2d \t %11.7f \t %7.5f \t %f \n',j,fx(j),ea(j),es);
    end
fprintf('\nLa raiz es: %f\n', fx(i));