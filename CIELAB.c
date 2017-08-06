#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d",&a);
    scanf("%d",&b);
    c=a-b;

    while(c>0)
    {
        x=c%10;
        printf("%d\n",x);
        c=c/10;
    }
    return 0;

}
