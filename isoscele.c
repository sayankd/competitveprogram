#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,t,x,i,l,c,p;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&a);
        x=2*a;
        for(i=x;i>0;i--)
        {
            b=((x*x)-(i*i));
            if(b!=0)
            {
                l=sqrt(b);
                l=l*l;
                if(l==b)
                {
                    p=sqrt(b);
                   if(p%2==0)
                   {

                       c=1;
                       break;
                   }
                }
            }

        }
        if(c==1)
        {
            printf("Yes\n");
        }
        else if(c==0)
        {
            printf("No\n");
        }
    }
    return 0;
}
