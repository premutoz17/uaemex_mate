%METODO DEL PUNTO00000000000000000000000000000 FIJO CON ITERACIONES
%se requieren los siguientes cinco parametros
%en el programa
%el pimer parametro g indica ingresar la funcion
%el segundo parametro x0 es dar un valor inicial
%el tercer parametro imax es dar el limite de iteracionesclc
%el cuarto parametro indica la tolerancia 
%recuerde que la tolerancia de error es mas pequeño que error absoluto
%el quinto parameto "ea" indica el error absoluto
function puntofijo(g,x0,imax,es,ea)

xr=x0;
iter=0; 
fprintf(' iter     xr         ea\n ')
while ((ea>=es)(iter<=imax))
     xrold=xr;
    xr=subs(g,xrold);
    ea=abs((xr-xrold)/xr)*100; 
    iter=iter+1;
   fprintf('%.2f \t %.3f \t %.3f\n ',iter,xr,ea)
end
fprintf('La raiz de tu función es: %.2f \n',xr)
end