#include<stdio.h>
int main()
{

    int  n,i,a[1000],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        while(a[i]>=10)
        {
            s=s+(int)a[i]/10;
            a[i]=a[i]%10;
        }
        while(a[i]>=7)
        {
            s=s+(int)a[i]/7;
            a[i]=a[i]%7;
        }
        while(a[i]>=5)
        {
            s=s+(int)a[i]/5;
            a[i]=a[i]%5;
        }
        while(a[i]<5 && a[i]>=1)
        {
            a[i]--;
            s++;
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
