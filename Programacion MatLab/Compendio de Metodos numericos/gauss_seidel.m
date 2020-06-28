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
d=diag(diag(A)); %se forma la matriz diagonal
l=d-tril(A); %se forma la matriz diagonal con ceros arriba y se cambia de signo lo que este debajo de la diagonal
u=d-triu(A); %se forma la matriz diagonal con ceros abajo y se cambia de signo lo que este arriba de la diagonal
C=((d-l)^-1)*B;
v=[i,X(1),X(2),X(3),ea]; %vector para graficar las iteraciones
T=((d-l)^-1)*u; % matriz de transicion
i=0;
    while ea>=es & i<iter
        Xi=T*X+C;
        i=i+1;
        ea=norm(Xi-X); %el comando norm obtiene a norma de una matriz. La norma es lo analogo al valor absoluto
        X=Xi;
        v(i,1)=i; %tabula columna de iteraciones
        v(i,2)=X(1); %tabula columna de los valoresde x1
        v(i,3)=X(2); %tabula columna de los valoresde x2
        v(i,4)=X(3); %tabula columna de los valoresde x3
        v(i,5)=ea; %tabula columna de ea
    end
fprintf('\n   Iteracion    x1        x2        x3        Error\n\n ')
disp(v) %impresion de la tabla.
fprintf('\nEl vector solucion seria: ')
X
