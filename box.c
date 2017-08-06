#include<stdio.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,m,r;
        scanf("%lld",&n);
        scanf("%lld",&m);
        if((n==1)&&(m!=1)&&(m!=2))
        {
            printf("No\n");
        }
        else if((m==1)&&(n!=1)&&(n!=2))
        {
            printf("No\n");
        }
        else if((((n%2)==0)||((m%2)==0)))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
