#include<stdio.h>
int main()
{
    int a[4],n=4,i,j,k,x;
    a[0]=1;
    a[1]=5;
    a[2]=7;
    a[3]=10;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                x=a[i]+a[j]+a[k];
                printf("%d\n",x);
            }
        }
    }
    return 0;

}
