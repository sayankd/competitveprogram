#include<stdio.h>
int main()
{
    int t,a[1001],d[1001],sm,x,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&sm);
        scanf("%d",&a[0]);
        x=0;
        d[0]=a[0];
        for(i=1;i<=sm;i++)
        {
            scanf("%d",&a[i]);
            x=x+a[i-1];
            d[i]=x;
        }
        for(i=0;i<=sm;i++)
        {
            printf("%d",d[i]);
        }
    }
    return 0;
}
