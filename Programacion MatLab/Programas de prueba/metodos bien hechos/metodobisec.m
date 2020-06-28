
function [zd] = biseccion(y)
fprintf('\nIngresa un intervalo para observar la gr�fica \n');
a1=input('\nIngresa el l�mite inferior: ');
b1=input('\nIngresa el l�mite superior: ');
t=linspace(a1,b1,1000);
plot(t,subs(y,t),'r')
grid on
title('GRAFICA DE LA FUNC�N')
xlabel('EJE X')
ylabel('EJE Y')
fprintf('\nObservaste la gr�fica par ver donde se encuentra la ra�z de la funci�n\n')
a=input('\nIngresa l�mite inferior: ');
b=input('\nIngresa l�mite superior: ');
tol=input('\nIngresa tolerancia: ');
zd=0;
Error=100;
i=1;
u=subs(y,a); 
v=subs(y,b); 
fprintf('Iteraci�n \t\t\tL�mite inferior\t\t\tL�mite superior\t\t\tAproximaci�n de la ra�z\t\t\t\t\t Error \n ')
if sign(u)==sign(v)    
    disp('Error no tiene soluci�n por este m�todo' )    
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
fprintf('\n\n La ra�z es: % .5f \n ',zd);
