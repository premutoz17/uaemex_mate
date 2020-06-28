clc;
clear all;
syms x;
n=input('Ingrese el numero de puntos: ');
    for i=1:n
        x(1,i)=input ('Componentes en x: ');
        i=i+1;
    end
    for i=1:n
        y(1,i)=input ('Componentes en y: ');
        i=i+1;
    end
hold on
plot(x,y,'--ro')
fprintf('\nObserve la gráfica y seleccione a qué tipo de modelo se ajustan los datos:\n\n')
m=input('1. Modelo exponencial\n2. Modelo de potencias\n3. Modelo de razón de crecimiento\n\nSeleccione una opción: ');
    switch m
        case 1
            x1=log(x);
            y1=log(y);
            sumx=0;
            sumx2=0;
            sumy=0;
            sumxy=0;
            st=0;
            sr=0;
                for i=1:n
                    sumx=sumx+x1(1,i);
                    sumy=sumy+y1(1,i);
                    sumxy=sumxy+x1(1,i)*y1(1,i);
                    sumx2=sumx2+x1(1,i).^2;
                end
                xm=sumx/n;
                ym=sumy/n;
                a1=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
                a0=ym-a1*xm;
                for i=1:n
                    p=(y1(1,i)-ym)^2;
                    q=(y1(1,i)-a0-a1*x1(1,i))^2;
                end
            alfa=exp(a0);
            f=alfa.*exp(a1.*x);
            fprintf('El modelo exponencial que se ajusta a tus datos es: y=%fe^(%f)x',alfa,a1)
        case 2
            x1=log10(x);
            y1=log10(y);
            sumx=0;
            sumx2=0;
            sumy=0;
            sumxy=0;
            st=0;
            sr=0;
                for i=1:n
                    sumx=sumx+x1(1,i);
                    sumy=sumy+y1(1,i);
                    sumxy=sumxy+x1(1,i)*y1(1,i);
                    sumx2=sumx2+x1(1,i).^2;
                end
                xm=sumx/n;
                ym=sumy/n;
                a1=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
                a0=ym-a1*xm;
                for i=1:n
                    p=(y1(1,i)-ym)^2;
                    q=(y1(1,i)-a0-a1*x1(1,i))^2;
                end
            alfa=10^(a0);
            fprintf('El modelo de ecuación de potencias que se ajusta a tus datos es: y=%fx^(%f)',alfa,a1)
        case 3
            x1=x.^-1;
            y1=y.^-1;
            sumx=0;
            sumx2=0;
            sumy=0;
            sumxy=0;
            st=0;
            sr=0;
                for i=1:n
                    sumx=sumx+x1(1,i);
                    sumy=sumy+y1(1,i);
                    sumxy=sumxy+x1(1,i)*y1(1,i);
                    sumx2=sumx2+x1(1,i).^2;
                end
                xm=sumx/n;
                ym=sumy/n;
                a1=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
                a0=ym-a1*xm;
                for i=1:n
                    p=(y1(1,i)-ym)^2;
                    q=(y1(1,i)-a0-a1*x1(1,i))^2;
                end
            alfa=1/a0;
            beta=a1/a0;
            fprintf('El modelo de ecuación de razón de crecimiento que se ajusta a tus datos es: y=%f(x/%f+x)\n\n',alfa,beta)
        otherwise
            disp('Ha seleccionado una opción no listada en el menú.')
    end
%a1=ordenada al origen (beta) y a0=pendiente(alfa)