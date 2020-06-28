clear all;
clc;
syms x; %Declaro a x variable simbolica
fprintf('Este programa halla raices de funciones por el metodo de falsa posici�n.\n')
f=input('Ingrese en terminos de x a la funcion f(x)= ');
al=input('Ingrese el primer valor del intervalo donde desea graficar: ');
bl=input('Ingrese el segundo valor del intervalo donde desea graficar: ');
ezplot(f,[al,bl]) %Graficamos la funcion
grid on
title('Grafiquita')
xlabel('Eje x') %Nombramos al eje x
ylabel('Eeje y')
fprintf('Observa la gr�fica para ver donde se encuentra la ra�z de la funci�n.\n')
a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la raiz, de tal manera de no dividir entre cero en la funci�n: ');
b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la raiz, de tal manera de no dividir entre cero en la funci�n: ');
n=input('Ingresa el n�mero de las cifras significativas: ');
imax=input('Ingresa el n�mero de iteraciones: ');
fa=subs(f,a); %Evaluo el valor de a en f y lo guardo en la variable fa
fb=subs(f,b);
    while (sign(fa)==sign(fb))
        fprintf('Ingresa un intervalo [a,b] valido que encierre a la ra�z.\n')
        a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la ra�z: ');
        b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la ra�z: ');
        fa=subs(f,a);
        fb=subs(f,b);
    end
r=0;
es=(0.5*(10^(2-n))); %Formula de cifras significativas
ea=100; %ea se inicia en 100
i=0; %Defino a i=0 para un contador
fprintf('\nIteraci�n\tValor de a\t\tValor de b\t\tValor de r\t\tError (ea)\tValor de (es): %f \n ',es)
    while (ea>=es | i==imax)
        auxr=r;
        r=a-((fa*(a-b))/(fa-fb));
        fr=subs(f,r);
            if (sign(fa)==sign(fr))
                a=r;
                fa=fr;
            else
                b=r;
                fb=fr;
            end
        ea=abs(((r-auxr)/r)*100);
        i=i+1;
        fprintf('\n %.f \t\t %.5f \t\t %.5f \t\t %.5f  \t\t %.5f', i,a,b,r,ea)
    end
fprintf('\n\n La ra�z es: %.2f \n ',r);
