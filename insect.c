#include<stdio.h>
int main()
{
    long long int t,x,y,n,p,q,r,a[3],i;
    scanf("%lld",&n);
    while(n--)
    {
    for(i=0;i<3;i++)
    {
        scanf("%lld",&a[i]);
    }

    t=a[2];
    p=a[1];
    q=a[0]+a[1];
    r=a[1]+(2*a[0]);
    t=t-1;
    while(t--)
    {
        p=(r%(1000000007))+(((p%(1000000007))+(q%(1000000007)))%1000000007);
        r=(r+(2*(q%(1000000007)))%1000000007)%1000000007;
        q=(r%(1000000007))-(q%(1000000007));
    }
    printf("%lld\n",r);
    }
    return 0;

}
