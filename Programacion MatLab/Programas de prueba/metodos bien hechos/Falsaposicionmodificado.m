function falsaposicionmodificado(fx,xl,xu,es,imax)
f=inline(fx);
fl=f(xl);
fu=f(xu);
iter=0;
iu=0;
il=0;
xr=100;
do=0;
disp('iter.  xl        xr')
while(do==0)
    xrold=xr;
    xr= xu-((fu*(xl-xu))/(fl-fu));
    fr=f(xr);   
    fprintf('%d\t   %f\t %f\t \n',iter,xl,xr)
    iter=iter+1;
    if(xr~=0)
        ea=abs(((xr-xrold)/xr)*100);
    end
    test=fl*fr;
    if(test<0)
        xu=xr;
        fu=f(xu);
        iu=0;
        il=il+1;
        if(il>=2)
            fl=fl/2;
        end
    else
        if(test>0)
            xl=xr;
            fl=f(xl);
            il=0;
            iu=iu+1;
            if(iu>=2)
                fu=fu/2;
            end
        else
            ea=0;  
        end
        if((ea<es)||(iter>=imax))
           
            break;
        end
    end

end
xr
