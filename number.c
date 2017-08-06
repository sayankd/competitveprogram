#include<stdio.h>
int evnum(int*a)
{
    int i;
    for(i=0;i<10;i++)
    {
        if(a[i]==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    int x,a[10],z=1,p,q,y,r,i,s;
    scanf("%d",&x);
    if(x==0)
    {
        printf("Insomnia");

    }
    else
    {
    for(i=0;i<10;i++)
    {
        a[i]=0;
    }
    q=x;
    while(q>0)
    {
        p=q%10;
        a[p]++;
        q=q/10;
    }
    /*for(i=0;i<9;i++)
    {
        printf("%d\t",a[i]);
    }*/
    y=evnum(a);
    //printf("%d\t",y);
    while(y==0)
    {
        z++;
        r=x*z;
    //printf("%d\t",r);
    s=r;
    while(r>0)
    {
        p=r%10;
        a[p]++;
        r=r/10;
    }
    //printf("\n");
    /*for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }*/
    //printf("\n");
    //printf("\n");
    y=evnum(a);
    }

    /*for(i=0;i<9;i++)
    {
        printf("%d\t",a[i]);
    }*/
    //printf("\n");
    printf("%d\n",s);
    }
    }
    return 0;
}
