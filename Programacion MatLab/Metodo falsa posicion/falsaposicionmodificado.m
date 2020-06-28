clear all;
clc;
syms x; %Declaro a x variable simbolica
f=input('Ingrese en terminos de x a la funcion f(x)= ');
al=input('Ingrese el primer valor del intervalo donde desea graficar: ');
bl=input('Ingrese el segundo valor del intervalo donde desea graficar: ');
ezplot(f,[al,bl]) %Graficamos la funcion
grid on
title('Grafiquita')
xlabel('Eje x') %Nombramos al eje x
ylabel('Eeje y')
fprintf('Observa la gr�fica para ver donde se encuentra la ra�z de la funci�n.\n')
a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la raiz, de tal manera de no dividir entre cero en la funcion: ');
b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la raiz, de tal manera de no dividir entre cero en la funcion: ');
n=input('Ingresa el n�mero de las cifras significativas: ');
imax=input('Ingresa el n�mero de iteraciones: ');
fa=subs(f,a); %Evaluo el valor de a en f y lo guardo en la variable fa
fb=subs(f,b);
    while (sign(fa)==sign(fb))
        fprintf('Ingresa un intervalo [a,b] valido que encierre a la ra�z.\n')
        a=input('Ingresa el valor de a del intervalo [a,b] que encierra a la raiz: ');
        b=input('Ingresa el valor de b del intervalo [a,b] que encierra a la raiz: ');
        fa=subs(f,a);
        fb=subs(f,b);
    end
r=0;
es=(0.5*(10^(2-n))); %Formula de cifras significativas
ea=100; %ea se inicia en 100
i=0; %Defino a i=0 para un contador
ia=0; %Iterador para a
ib=0; %Iterador para b
fprintf('\nIteraci�n\tValor de a\tValor de b\tError \n ')
    while (ea>=es | i>=imax)
        auxr=r;
        r=a-((fa*(a-b))/(fa-fb));
        fr=subs(f,r);
            if (sign(fa)==sign(fr))
                a=r;
                fa=fr; 
                ia=0;
                ib=ib+1;
                    if (ib>=2)
                        fb=fb/2;
                    end
            else
                b=r;
                fb=fr;
                ib=0;
                ia=ia+1;
                    if (ia>=2)
                        fa=fa/2;
                    end
            end
        ea=abs(((r-auxr)/r)*100);
        i=i+1;
        fprintf('\n %.f \t\t %.3f \t\t %.3f \t\t %.3f', i,a,b,ea)
    end
fprintf('\n\n La ra�z es: %.2f \n ',r);