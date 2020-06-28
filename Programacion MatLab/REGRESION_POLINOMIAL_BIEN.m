clear all;
%regresion polinomial
%x, y son los vectores de las abscisas 
%y de las ordenadas de los datos, respectivamente
%n, es el grado del polinomio al que se quieren ajustar los datos
%p, es el vector de los coeficientes de dicho polinomio.
x=input('Ingrese los valores de la X d ela forma [...]')
y=input('Ingrese los valores de la Y d ela forma [...]\n')
i=length(y);
M=[x.^2,x,ones(size(x))];
p=M\y ;%coeficientes del polinomio
j=i+1;
p1=p(i,:);
fprintf('\nLos coeficientes del polinomio son\n');
p2=p1'
hold on
plot(x,y,'ro','markersize',2,'markerfacecolor','r')
z=@(x) polyval(p2,x);
fplot(z,[x(1),x(end)])
xlabel('x')
ylabel('y')
grid on
title('Polinomio aproximador')
hold off