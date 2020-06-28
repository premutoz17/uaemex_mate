fprintf('Programa del metodo de la secante')
syms x y;
f=input('\n Ingrese la funcion: \n');
a1=input('\n Ingrese el intervalo inferior: \n');
b1=input('\n Ingrese el intervalo superior: \n');
t=linspace(a1,b1,100);
plot(t,subs(f,t),'b -');
grid on 
title('Metodo de la secante')
xlabel('Eje x')
ylabel('Eje y')
fprintf('\nAhora que viste la grafica');
fx(1)=input('\nIngrese el primer valor inicial, cercano al valor donde se intersecta con el eje x: \n');%x(i-1)
fx(2)=input('\nIngrese el segundo valor inicial, cercano al valor donde se intersecta con el eje x: \n');%x(i)
tol=input('\nIngrese el porcentaje de error: \n');
f1=subs(f,x,fx(1));%f(x(i-1))
f2=subs(f,x,fx(2));%f(xi)

ea(1)=100; %error  
i=1;
j=2;
 
while abs(ea(i))>=tol;%mientras el valor absoluto del error mayor igual que a tolerancia
    fx(j+1)=(fx(j-1)*f2-fx(j)*f1)/(f2-f1);  
    f1=f2; 
    f2=subs(f,x,fx(j+1));
    ea(i+1)=(fx(j+1)-fx(j))/fx(j+1)*100;
    j=j+1;
    i=i+1;  
end
 
fprintf(' i     fx(i)         Error aprox (i) \n');
for k=2:j;
    fprintf('%2d\t\t\t%.5f\t\t\t\t%.5f\n',k-1,fx(k),ea(k-1));
end
fprintf('La raiz es: %.5f',fx(i))