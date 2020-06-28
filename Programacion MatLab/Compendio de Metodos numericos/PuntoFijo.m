%{
Escriba en la ventana de comandos "PuntoFijo('y')" sin las comillas y 
sustituya a y por la funcion (en terminoos de x) de su interes. No olvide 
introducir a la funcion sumando un +x o despejando a x tal como lo precisa 
el metodo del punto fijo.
%}

function PuntoFijo(y)
syms x;
fprintf('Este programa halla raices de funciones por el metodo de Punto fijo.\n')
g=input('Ingrese en terminos de x a la funcion original f(x)= ');
al=input('Ingrese el primer valor del intervalo donde desea graficar: ');
au=input('Ingrese el segundo valor del intervalo donde desea graficar: ');
ezplot(g,[al,au])
grid on;
title('Funcion')
xlabel('Eje x')
ylabel('Eje y')
x0=input('Ingrese un valor inicial para x0: ');
imax=input('Ingrese el numero de iteraciones que desea realizar: ');
xr=x0;
i=0;
f=inline(y);
n=input('Ingrese el nùmero de las cifras significativas para calcular (es): ');
es=(0.5*(10^(2-n)));
s=0;
fprintf('\nIteración\tValor de xi\t\tError (ea)\tValor de (es): %f \n ',es)
    while (s==0)
         xrold=xr;
         xr=f(xrold);
         i=i+1;
             if(xr~=0)
                 ea=abs((xr-xrold)/xr)*100;
             end
             if((ea<=es)||(i>=imax))
                 break;
             end
         fprintf('\n %.f \t\t %.5f \t\t %.4f \t\t %.5f  \t\t %.5f', i,xr,ea)
    end
fprintf('\n\nLa raiz es %.5f \n',xr)
