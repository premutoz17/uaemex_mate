function [x iter]=proceso_iterativo(sistema,x0,tol,c)
%[y1,...yN]=salidas de que da mi función
%(x1,...,xM)=entradas que necesita mi función
%sistema o fun no necesariamente tiene que ser solo sistema
%x0=valor inicial
%tol=tolerancia
%c=iteraciones maximas
x=sistema(x0)';
iter=x;
k=0;
while norm(x-x0)>tol && k<c
    x0=x;
    x=sistema(x0)';
    k=k+1;
    iter=[iter x];
end
if k>=c
    x= 'no converge';
end
