x=input('Cual es tu nombre? ');
y=input('Cual es tu edad? ');
z=input('Cual es tu numero de cuenta? ');
res(:,1)=x';
res(:,2)=y';
res(:,3)=z';
disp('tabla de Alumnos')
disp('          nombre        edad          numero de cuenta')
disp(res)
