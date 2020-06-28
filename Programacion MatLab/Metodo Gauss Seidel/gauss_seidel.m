clc;  
clear all;
syms y;
s='s';
n=0;
i=1;
j=1;
fprintf('Este programa soluciona sistemas de ecuaciones por el metodo de Gauss Seidel.\n\n')
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
        B(k,1)=input('');
    end
%Fin de la formacion de la matriz
%Formamos el vector con los valor iniciales para las variables, que los
%fijaremos en 0
    for k=1:m
        X(k,1)=0;
    end
n=input('\nIngresa el nùmero de las cifras significativas para calcular (es): ');
es=(0.5*(10^(2-n))); %Formula de cifras significativas
ea=100; %es se inicia en 100
iter=input('Ingrese el n�mero de iteraciones: ');
d=diag(diag(A)); %obtencion de la matriz diagonal
l=d-tril(A); %obtencion de la matriz diagonal superior L
u=d-triu(A); %obtencion de la matriz diagonal inferior u 
C=((d-l)^-1)*B; % vector constante C, para el metodo
z=[i,X(1),X(2),X(3),ea]; %vector que me permite graficar la tabla
T=((d-l)^-1)*u; % matriz de transicion de gauss
i=0;
    while ea>=es & i<iter
        Xi=T*X+C;
        i=i+1;
        ea=norm(Xi-X);
        X=Xi;
        z(i,1)=i;
        z(i,2)=X(1);
        z(i,3)=X(2);
        z(i,4)=X(3);
        z(i,5)=ea;
    end
fprintf('\n   Iteracion    x1        x2        x3        Error\n\n ')
disp(z) %impresion de la tabla.
fprintf('\nEl vector solucion seria: ')
X
