%METODO GAUSS JORDAN
clear all;
clc;
fprintf('Dame la matriz aumentada: \n\n');
f=input('Cuantas filas tiene la matriz: ');
c=input('Cuantas columnas tiene la matriz: '); 
for k=1:c
  for j=1:f
    fprintf('fila : %x\n',j)
    fprintf('columna : %x',k)
    r=input('Numero de esta fila y columna: ');
    A(j,k)=r;
    j=j+1;
  end
  k=k+1;
end
A
pause 
for k=1:c-1
  A(k,:)=A(k,:)/A(k,k);
    for j=k+1:f
    A(j,:)=A(j,:)-A(k,:)*A(j,k);
    j=j+1;
    A
    pause
    end
  k=k+1;
  A
  pause

end 
for k=f:-1:2
  for j=k-1:-1:1
    A(j,:)=A(j,:)-A(k,:)*A(j,k);
    j=j-1;
    A
    pause
  end
  k=k-1;
  A
  pause
end
fprintf('resultado\n'); 
