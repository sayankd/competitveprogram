#include<stdio.h>
int main()
{
	int t;
	unsigned int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%u",&n);
		n = (n)&((~n)+1);
		printf("%d\n",log(n)/log(2));
	}
}
