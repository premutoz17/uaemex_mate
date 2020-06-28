%{
Escriba en la ventana de comandos "syms x", luego en otra linea escriba
"f=(su funcion en termimos de x)". Finalmente en una tercera linea 
escriba "secantemodificado(f)"
%}

function s=secantemodificado(f)
clc;
fprintf('Introduzca el intervalo [a,b] donde desea graficar.\n');
a=input('Ingrese el valor de a: ');
b=input('Ingrese el valor de b: ');
v=linspace(a,b,200);
plot(v,subs(f,v));
title('Grafiquita');
xlabel('Eje x');
ylabel('Eje y');
grid on;
fprintf('\nObserve bien la grafica y elja un valor inicial para x0,\n');
fprintf('tal que no este cerca de un mínimo o máximo local.');
x0=input('\n\nIngrese el valor inicial para x0: ');
n=input('Ingresa el nùmero de las cifras significativas para calcular (es): ');
delta=input('Ingrese un valor para δ: ');
es=(0.5*(10^(2-n)));
imax=input('Ingrese el número de iteraciones que desea realizar: ');
iter=0; %iter es mi variable para detener las iteraciones en el bucle while.
i=1; %la variable i es para un contador a la hora de tabular.
fx(i)=x0; %Las variables del tipo fx(i) seran puntos en el eje x. No son imagenes.
syms x;
f1=subs(f,x,fx(i)); %imagen de fx(i) bajo f.
z=diff(f);%z es la primera derivada de f
z2=diff(z);%z2 es la segunda derivada de f
vz2=subs(z2,x0);%vz2 es el valor de la segunda derivada en x0.
    if(vz2==0)
        fprintf('La segunda derivada de la funcion evaluada en el valor inicial x0 es igual a cero\nelija otro punto inicial\n')
       return
    end
d=subs(f,x,fx(i)+delta*fx(i));%La variable d corresponde a la imagen f(xi+δxi).
ea=100;
    while abs(ea(i)>=es | iter==imax);
        fx(i+1)=fx(i)-(f1*fx(i)*delta)/(d-f1);%formula de la secante modificada
        ea(i+1)=abs((fx(i+1)-fx(i))/fx(i+1)*100);
        f1=subs(f,x,fx(i+1));
        fx(i)=fx(i+1);
        d=subs(f,x,fx(i+1)+delta*fx(i+1));
        i=i+1;
        iter=iter+1;
    end
fprintf('\nIteracion      xi        Error ea      Valor de (es)\n');
    for j=1:i;%este bucle imprime los datos para cada i del bucle while
        fprintf('%2d \t %11.7f \t %7.5f \t %f \n',j,fx(j),ea(j),es);
    end
fprintf('\nLa raiz es: %f\n', fx(i));