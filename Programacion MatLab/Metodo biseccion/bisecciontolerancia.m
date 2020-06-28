%Metodo de bisección
clear all;
clc;
syms x; %Declaro a x variable simbolica
f=input('Ingrese en terminos de x a la funcion f(x)= ')
al=input('Ingrese el primer valor del intervalo donde desea graficar: ')
bl=input('Ingrese el segundo valor del intervalo donde desea graficar: ')
ezplot(f,[al,bl]) %Graficamos la funcion
title('Grafiquita');
xlabel('Eje x'); %Nombramos al eje x
ylabel('Eje y');
grid on; %Activamos cuadricula
a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la raiz: ')
b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la raiz: ')
m=(a+b)/2; %m es el punto medio de a y b
fa=subs(f,x,a); %Evaluo el valor de a en f y lo guardo en la variable fa
fb=subs(f,x,b); %Evaluo el valor de b en f y lo guardo en la variable fb
fm=subs(f,x,m); %Evaluo el valor de b en f y lo guardo en la variable fm

    while (fa*fb>0)
        fprintf('Ingresa valores validos para a y b. ')
        a=input('Observe bien la grafica y digite el valor de a del intervalo [a,b]: ')
        b=input('\nIngresa el valor de b del intervalo [a,b]: ')
        m=(a+b)/2;
        fa=subs(f,x,a);
        fb=subs(f,x,b);
        fm=subs(f,x,m);
    end

tolerancia=input('Ingrese la tolerancia: ') %Esta tolerancia es la distancia que tendra f y el eje x
i=0; %Defino a i=0 para un contador
    while (abs(fm)>tolerancia) %Mientras fc esté a una distancia mayor a la tolerancia del eje x (por arriba o por abajo)
        if (fa*fm<0) %Si fa*fm<0 entonces sustutuyo b=m
            b=m; %Asigno un nuevo b
        else %sino remplazo a=c
            a=m; %Asigno un nuevo a
        end
        fa=subs(f,x,a); %Evaluo el valor del nuevo a en f
        fb=subs(f,x,b); %Evaluo el valor del nuevo b en f
        m=(a+b)/2; %Calculo el nuevo punto medio
        fm=subs(f,x,m); %Evaluo el valor del nuevo m en f
        i=i+1;
        fprintf('\nIteracion: %.f \t\t Valor de a: %.3f \t\t Valor de b: %.3f \t\t Varlor de (a+b)/2: %.3f', i,a,b,m)
    end

fprintf('\n\nLa raiz es: %f',m)
