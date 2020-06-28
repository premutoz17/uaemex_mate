
function [zd] = biseccion(y)
fprintf('\nIngresa un intervalo para observar la gráfica \n');
a1=input('\nIngresa el límite inferior: ');
b1=input('\nIngresa el límite superior: ');
t=linspace(a1,b1,1000);
plot(t,subs(y,t),'r')
grid on
title('GRAFICA DE LA FUNCÓN')
xlabel('EJE X')
ylabel('EJE Y')
fprintf('\nObservaste la gráfica par ver donde se encuentra la raíz de la función\n')
a=input('\nIngresa límite inferior: ');
b=input('\nIngresa límite superior: ');
tol=input('\nIngresa tolerancia: ');
zd=0;
Error=100;
i=1;
u=subs(y,a); 
v=subs(y,b); 
fprintf('Iteración \t\t\tLímite inferior\t\t\tLímite superior\t\t\tAproximación de la raíz\t\t\t\t\t Error \n ')
if sign(u)==sign(v)    
    disp('Error no tiene solución por este método' )    
    return 
end
while (b-a)/2>tol
    auxa=a;
    auxb=b;
    aux=zd; 
    zd=(a+b)/2;
    w=subs(y,zd);    
    if sign(u)==sign(w)        
        a=zd;        
        u=w;    
    else
       b=zd;        
        v=w;    
    end
  Error=abs(((zd-aux)/zd)*100); 
  %ErrorR= (error real/valor real)*100;
  fprintf('\n%.f \t\t\t\t\t %.5f \t\t\t\t\t %.5f \t\t\t\t %.5f \t\t\t\t\t\t\t %.5f', i,auxa,auxb,zd,Error);
  i=i+1;
end
fprintf('\n\n La raíz es: % .5f \n ',zd);
