plot(c,f,'d--');
c=[4:4:20];
f=((667.38./c).*(1-exp(-0.146843.*c)))-40;
disp('c         F(c)')
ValoresParacaidas=[c',f']