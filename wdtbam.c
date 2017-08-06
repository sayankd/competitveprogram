#include<stdio.h>
int main()
{
    int t,count,n,i,max;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        char p[n],q[n];
        int r[n+1];
        scanf("%s",p);
        scanf("%s",q);
        for(i=0;i<=n;i++)
        {
            scanf("%d",&r[i]);
        }
        for(i=0;i<n;i++)
        {
            if(p[i]==q[i])
            {
                count++;
            }
        }
        if(count==n)
        {
            printf("%d",r[n]);
        }
        else
        {
            max=r[0];
            for(i=1;i<=count;i++)
            {
                if(r[i]>max)
                {
                    max=r[i];
                }
            }
            printf("%d",max);
        }
    }
    return 0;
}
