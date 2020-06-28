function [xr] = metodo_de_falsa_posicion(y)
y=input('ingrese tu funcion despejada en x: ');
%Metodo que calcula la raiz de una ecuacion
%mediante el metodo de la falsa posicion
a=input('ingrese el limite inferior para observar la grafica: ');
b=input('ingrese el limite superior para observar la grafica: ');
t=linspace(a,b,100);
plot(t,subs(y,t))
grid on
xl=input('\n Ingrese el limite inferior: ');
xu=input('\n Ingrese el limite superior: ');
error=input('\n Ingresa el limite de error: ');
xr=0; %se inicia la variable xr con un valor que puede ser aleatorio ya que no afecta el procedimiento
Error=100;
i=1;
fprintf('La raíz es: ')
%fprintf('No. de interacion \t\t Aproximacion de la raiz \t\t\t Error \n ')
if((subs(y,xl))*(subs(y,xu))>0)
    disp('El intervalo no es valido');
    xr=NaN;
    return
end
while (Error>error)
    aux=xr;
    xr=xu-((subs(y,xu)*(xl-xu))/(subs(y,xl)-subs(y,xu)));
    h=subs(y,xl)*subs(y,xr);
    if(h<0)
        xu=xr;
    elseif(h>0)
        xl=xr;
    else
        Error=error;
    end
    Error=abs(((xr-aux)/xr)*100); %error relativo aproximado
    %fprintf('\n \t %.f \t\t\t\t\t\t %.7f \t\t\t\t\t\t %.7f', i, xr, Error);
    i=i+1;
end
fprintf('La raiz es: %.5f \n ',xr)