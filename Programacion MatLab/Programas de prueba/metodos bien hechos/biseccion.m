%METODO DE BISECCION
function y=biseccion(f,a,b,tol,iter)
u=subs(f,a);
v=subs(f,b);
if sign(u)==sign(v)%compara los signos de a y b
    disp('NO TIENE SOLUCION EN ESTE INTERVALO')
    return
end
while (b-a)/2>tol %la distancia entre los intervalos
   c=(b-a)/2;%parte el intervalo
   w=subs(f,c)
   if sign(u)==sign(w);
       a=c;
       u=w;
   else
       b=c;
       v=w;
   end
end
