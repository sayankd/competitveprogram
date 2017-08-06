#include<stdio.h>
#include<math.h>
int main()
{
    float a,d,u,x,p,q,v,l,y,z;
    scanf("%f%f",&a,&d);
    d=d*d;
    u=a+d;
    for(x=0;x<a;x++)
    {
        p=x;
        q=a-x;
        q=q*q;
        v=sqrt(q+d);
        l=v+x;
        if(l<u)
        {
            u=l;
            y=x;
            z=v;
        }
    }
    printf("X=%f\nY=%f\n",y,z);
}
