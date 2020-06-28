clc;
clear all;
syms X;
n=input('Ingrese el grado del polinomio (reste uno al n�mero de punts que tiene): ');
    for i=1:n+1
        x(1,i)=input ('Componentes en x: ');
        i=i+1;
    end
    for i=1:n+1
        y(1,i)=input ('Componentes en y (y=f(x)): ');
        i=i+1;
    end
sum=0;
    for i=0+1:n+1
        product=y(1,i);
            for j=0+1:n+1
                    if i~=j
                        product=product*(X-x(1,j))/(x(1,i)-x(1,j));
                    end
            end
sum=sum+product;
    end
sum;
a=input('Digite el valor donde quiere interpolar: ');
%falta sustituir a en sum
fa=subs(sum,a);
fprintf('El valor interpolado es: %f\n',fa)
        