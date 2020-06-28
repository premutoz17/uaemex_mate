clear all;
clc;
syms x; %Declaro a x variable simbolica
fprintf('Este programa halla raices de funciones por el metodo de bisección.\n')
f=input('Ingrese en terminos de x a la funcion f(x)= ');
al=input('Ingrese el primer valor del intervalo donde desea graficar: ');
bl=input('Ingrese el segundo valor del intervalo donde desea graficar: ');
ezplot(f,[al,bl]) %Graficamos la funcion
grid on
title('Grafiquita')
xlabel('Eje x') %Nombramos al eje x
ylabel('Eeje y')
fprintf('Observa la gráfica para ver donde se encuentra la raíz de la función.\n')
a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la raiz: ');
b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la raiz: ');
n=input('Ingresa el nùmero de las cifras significativas para calcular (es): ');
fa=subs(f,a); %Evaluo el valor de a en f y lo guardo en la variable fa
fb=subs(f,b);
    while (sign(fa)==sign(fb))
        fprintf('Ingresa un intervalo [a,b] valido que encierre a la raíz.\n')
        a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la raiz: ');
        b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la raiz: ');
        fa=subs(f,a);
        fb=subs(f,b);
    end
m=0; %Inicio a m=0, donde m esl el punto medio entre a y b
es=(0.5*(10^(2-n))); %Formula de cifras significativas
ea=100; %es se inicia en 100
i=0; %Defino a i=0 para un contador
fprintf('\nIteración\tValor de a\t\tValor de b\t\tValor de (a+b)/2\tError (ea)\tValor de (es): %f \n ',es)
    while (ea>=es)
        auxm=m;
        m=(a+b)/2;
        fm=subs(f,m);
            if (sign(fa)==sign(fm))
                a=m;
                fa=fm;
            else
                b=m;
                fb=fm;
            end
        ea=abs(((m-auxm)/m)*100);
        i=i+1;
        fprintf('\n %.f \t\t %.5f \t\t %.5f \t\t %.5f  \t\t %.5f', i,a,b,m,ea)
    end
fprintf('\n\n La raíz es: %.2f \n ',m);
