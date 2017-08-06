#include<stdio.h>
int noncontiguous(int*,int);
int contiguous(int*,int);

int main()
{
    int n,i,r1,r2,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    r1=noncontiguous(a,n);
    r2=contiguous(a,n);
    if(r2>0 || r1>0)
    {
    printf("%d %d\n",r2,r1);
    }
    else
    {
        printf("%d %d\n",a[0],a[0]);
    }
    }
    return 0;
}
int noncontiguous(int *a,int n)
{
    int sum,sum2,i;
    sum=a[0];
    for(i=1;i<n;i++)
    {
        sum2=sum+a[i];
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
int contiguous(int *a,int n)
{
    int x,y,i;
    x=0;
    y=0;
    for(i=0;i<n;i++)
    {
        x=x+a[i];
        if((x>y))
        {
            y=x;
        }
    }
    return y;
}
