#include<stdio.h>
int main()
{
     int a[100000],x,b,c,p,t=0;
    int i=0;
    for(i=0;i<100000;i++)
    {
        a[i]=0;
    }
    i=0;
    scanf("%d",&x);
    scanf("%c",&i);
    while(i!=-1)
    {
        scanf("%c",&i);
        scanf("%d%d",&b,&c);
        switch(i)
        {
        case 67 :
            if(a[b]==0)
            {
                a[b]=1;
            }
            if(a[c]==0)
            {
                a[c]=1;
            }
            break;
        case 81 :
            if(a[b]==1 && a[c]==1)
            {
                printf("Yes\n");
            }
            else
                printf("No\n");

        }
        scanf("%d",&i);
    }
    return 0;
}
