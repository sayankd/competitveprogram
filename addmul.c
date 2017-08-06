#include<stdio.h>
int main()
{
   long long int n,q,z,x,y,v,i,sum;
    long long int c=1000000007;
    scanf("%lld",&n);
    scanf("%lld",&q);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    while(q--)
    {
        scanf("%lld",&z);
        sum=0;
    switch(z)
    {
    case 1:
            scanf("%lld",&x);
            scanf("%lld",&y);
            scanf("%lld",&v);
            v=v%c;
            for(i=x-1;i<y;i++)
            {
                a[i]=a[i]%c;
                a[i]=((a[i]+v)%c);
            }
            break;
        case 2:
            scanf("%lld",&x);
            scanf("%lld",&y);
            scanf("%lld",&v);
            v=v%c;
            for(i=x-1;i<y;i++)
            {
                a[i]=a[i]%c;
                a[i]=((a[i]*v)%c);
            }
        break;
        case 3:
            scanf("%lld",&x);
            scanf("%lld",&y);
            scanf("%lld",&v);
            v=v%c;
            for(i=x-1;i<y;i++)
            {
                a[i]=v%c;
            }
        break;
        case 4:

            scanf("%lld",&x);
            scanf("%lld",&y);
            for(i=x-1;i<y;i++)
            {
                sum=sum%c;
                a[i]=a[i]%c;
                sum=((sum+a[i])%c);
            }
            printf("%lld\n",sum);

    }
    }
    return 0;
}
