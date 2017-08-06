#include <stdio.h>
long long int a[500000]={0};
 
long long int check(long long int n)
{
    long long int t;
    if(n < 500000)
    {
        if(a[n] != 0)
        {
            return a[n];
        }
    }
    if((n/2)+(n/3)+(n/4) <= n)
    {
        return n;
    }
    else{
        t=check(n/2)+check(n/3)+check(n/4);
        if(n< 500000)
        {
            a[n]=t;
        }
        return t;
    }
}
 
 
 
 
int main(void) {
	long long int n;
	while(scanf("%lld",&n) !=EOF)
	{
	    printf("%lld\n",check(n));
	}
	return 0;
}
