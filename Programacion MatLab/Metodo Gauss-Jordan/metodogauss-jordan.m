clc;  
clear all;
syms y;
s='s';
n=0;
i=1;
j=1;
fprintf('Este programa soluciona sistemas de ecuaciones por el metodo de Gauss simple. \nSi el sistema es 2x2 se mostrar� la gr�fica.\n\n')
m=input('Ingrese el n�mero de ecuaciones de su sistema: ');
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
fprintf('\nLa matriz aumentada del sistema seria: ')
A
%Fin de la formacion de la matriz
%Graficamos sistema si es 2x2
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
%Inicia el escalonamiento de la matriz
fprintf('\nAhora se formara la matriz escalonada. Presione ENTER para comenzar.\n')
pause
f=m; %Definimos a f como el numero de filas de la matriz aumentada
c=m+1; %Definimos c como el numero de columnas de la matriz aumentada
    for k=1:c-1
        A(k,:)=A(k,:)/A(k,k); %La expresion A(k,:) significa que se trabajara en todas las columnas de la fila k
            for j=k+1:f
                A(j,:)=A(j,:)-A(k,:)*A(j,k);
                j=j+1;
                A
            end
        k=k+1;
        A
    end 
    for k=f:-1:2
            for j=k-1:-1:1
                A(j,:)=A(j,:)-A(k,:)*A(j,k);
                j=j-1;
                A
            end
        k=k-1;
        A
    end
%Fin del escalonamiento
%Se muestran soluciones
fprintf('\nLas soluciones serian: \n');
    for i=1:m
            for j=m+1
                A(i,j)
            end
    end
