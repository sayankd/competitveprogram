#include<stdio.h>
int main()
{
    int x=0,y=0,n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0)
        {
            x++;
        }
        else
        {
            if(x>y)
            {
                y=x;
            }
            else
                x=0;
        }
    }
    printf("%d",y);

}
