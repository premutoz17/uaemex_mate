clc;  
clear all;
syms y;
s='s';
n=0;
i=1;
j=1;
fprintf('Este programa soluciona sistemas de ecuaciones por el metodo de Gauss simple. \nSi el sistema es 2x2 se mostrarï¿½ la grï¿½fica.\n\n')
m=input('Ingrese el nùmero de ecuaciones de su sistema: ');
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
%Fin de la grafica
fprintf('\nLa matriz asociada al sistema es: ');
A
%Se selecciona el pivote
k=1;
p=k;
big=abs(A(p,p));
    for i=k+1:m
        dummy=abs(A(i,k));
            if (dummy>big)
                big=dummy;
                p=i
            end
    end
    if p~=k
            for j=k:m+1
                dummy=A(p,j);
                A(p,j)=A(k,j);
                A(k,j)=dummy;
            end
    end
big=dummy;
fprintf('La matriz reordenada despues del pivoteo es: ')
A
%Fin del pivoteo
%Empezamos la eliminacion
x=1;
    while(x<m)
            for t=1:m-1
                    for l=x:m-1
                        A(l+1,:)=A(t,:)*(-A(l+1,t)/A(t,t))+A(l+1,:);
                    end
                x=x+1;
            end
    end
fprintf('La matriz desï¿½es de la eliminacion queda como: ')
A
%Fin de la eliminacion
%Inicio sustitucion hacia atras
X(m)=A(m,m+1)/A(m,m);
    for h=m-1:-1:1
        S=A(h,m+1);
            for f=m:-1:1
                S=S-A(h,f)*X(f);
            end
        S=S/A(h,h);
        X(h)=S;
    end
%Fin de la sustitucion
disp('Resultados:')
    for r=1:m
        fprintf('x%d = %f\n ',r,X(r));
    end
 