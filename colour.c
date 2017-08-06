#include<stdio.h>
int main()
{
    int t;
    int n;
    int a[3],i,max,x;
    scanf("%d",&t);
    while(t--)
    {
        a[0]=0;
        a[1]=0;
        a[2]=0;
        scanf("%d",&n);
        char room[n];
        char rc;
        scanf("%s",room);
        for(i=0;i<n;i++)
        {
            rc=room[i];
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
            }
        }
        printf("\n");

    }
    return 0;
}
