#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,*a,i,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a = (int *)malloc(sizeof(int)*n);
		if(n==1)
		{
			i = 0;
			s = 1;
		}
		else
		{
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<n;i++)
		{
			a[i] = a[i]+a[i-1];
		}
		for(i=1;i<n;i++)
		{
			if(a[i-1]==(a[n-1]-a[i]))
			{
				s = 1;
				break;
			}
		}
		}
		if(s==1)
			printf("%d\n",i+1);
		else
			printf("-1\n");
	}
	return 0;
}
