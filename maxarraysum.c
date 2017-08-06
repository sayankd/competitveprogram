#include<stdio.h>
long long int noncontiguous(long long int*,long long int);
long long int contiguous(long long int*,long long int);

int main()
{
    long long int n,i,r1,r2,t,max;
    scanf("%lld",&t);
    while(t--)
    {
    scanf("%lld",&n);
    long long int a[n];
    scanf("%lld",&a[0]);
    max=a[0];
    for(i=1;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(max<=a[i])
        {
            max=a[i];
        }
    }
    if(max<0)
    {
        printf("%lld %lld\n",max,max);
    }
    else
    {
    r1=noncontiguous(a,n);
    r2=contiguous(a,n);
    if(r2>0 || r1>0)
    {
    printf("%lld %lld\n",r2,r1);
    }
    else
    {
        printf("%lld %lld\n",a[0],a[0]);
    }
    }
    }

    return 0;
}
long long int noncontiguous(long long int *a,long long int n)
{
    long long int sum,sum2,i;
    sum=a[0];
    for(i=1;i<n;i++)
    {
        sum2=sum+a[i];
        if(sum2<0)
        {
            sum2=0;
        }
        if(sum>sum2)
        {
            sum=sum;
        }
        else
        {
            sum=sum2;
        }
    }
    return sum;
}
long long int contiguous(long long int *a,long long int n)
{
    int x,y,i;
    x=0;
    y=0;
    for(i=0;i<n;i++)
    {
        x=x+a[i];
        if(x<0)
        {
            x=0;
        }
        if((x>0 && x>y))
        {
            y=x;
        }
    }
    return y;
}
