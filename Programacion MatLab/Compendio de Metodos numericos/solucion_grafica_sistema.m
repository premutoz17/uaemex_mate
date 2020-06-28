clc;  
clear all;
syms y;
s='s';
n=0;
i=1;
j=1;
fprintf('Este programa soluciona graficamente sistemas de ecuaciones 2x2 por el metodo de Gauss simple.\n\n')
m=input('Ingrese el número de ecuaciones de su sistema: ');
fprintf('\nA continuacion ingrese los coeficientes de las ecuaciones para formar la matriz asociada al sistema.\n\n');
%Formamos la matriz asociada al sistema
    while (i<=m)
            for j=1:m
                fprintf('Digite la entrada (%i,%i) de la matriz: ',i,j);
                A(i,j)=input('');
            end
        i=i+1;
    end 
fprintf('\nIngrese ahora los resultados de las ecuaciones.\n\n');
    for k=1:m
        fprintf('Resultado de la ecuacion %i con posicion en la matriz (%i,%i): ',k,k,m+1);
        A(k,m+1)=input('');
    end
%Fin de la formacion de la matriz
%Graficamos sistema 2x2
    if(m==2)
            while (s=='s')
                al=input('\nIngrese el primer valor del intervalo donde desea graficar: ');
                bl=input('Ingrese el segundo valor del intervalo donde desea graficar: ');
                f=(-A(1,1)*y+A(1,3))/A(1,2);
                g=(-A(2,1)*y+A(2,3))/A(2,2);
                hold on;
                ezplot(f,[al,bl])
                ezplot(g,[al,bl])
                grid on
                title('Grafiquitas')
                xlabel('Eje x')
                ylabel('Eeje y')
                s=input('Quiere graficar de nuevo en otro intervalo? (s/n): ');
                    if (s=='r')
                        break;
                    end
            end
    end