#include<stdio.h>
int main()
{
    long long int t;
    long long int n;
    long long int a[3],i,max,x;
    scanf("%lld",&t);
    while(t--)
    {
        for(i=0;i<3;i++)
        {
            scanf("%lld",&a[i]);
        }
        scanf("%lld",&n);
        x=0;
        for(i=0;i<n-1;i++)
        {
            if(a[0]>0)
            {
                a[0]--;
                x++;
            }
            if(a[1]>0)
            {
                a[1]--;
                x++;
            }
            if(a[2]>0)
            {
                a[2]--;
                x++;
            }
            /*rc=room[i];
            if(rc=='B')
            {
                a[0]++;
            }
            else if(rc=='G')
            {
                a[1]++;
            }
            else if(rc=='R')
            {
                a[2]++;
            }
        }
        if(a[0]>a[1])
        {
            max=a[0];
            x=0;
        }
        else
        {
            max=a[1];
            x=1;
        }
        if(max<a[2])
        {
            max=a[2];
            x=2;
            printf("%d",a[0]+a[1]);
        }
        else
        {
            if(x==0)
            {
              printf("%d",a[1]+a[2]);
            }
            else
            {
                printf("%d",a[0]+a[2]);
            }*/
        }
        printf("%lld",x+1);
        printf("\n");

    }
    return 0;
}

