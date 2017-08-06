#include<stdio.h>
int main()
{
    long long int a,b,x,p,t;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&p);
    b=1;
    a=p;
    x=a%10;
    while(b!=0)
    {
     a=p;
    x=a%10;
    while(x==0)
    {
        x=a%10;

        a=a/10;
    }
    if(x==5)
    {
        p=p*4;
        b=1;
    }
    else
    {
        b=0;
    }
    }
    printf("%lld\n",p);
    }
    return 0;
}
