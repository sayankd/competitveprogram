#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,*a,*c,i,count;
	scanf("%d",&t);
	while(t--)
	{
		count = 0;
		scanf("%d",&n);
		a = (int *)malloc(sizeof(int)*n);
		c = (int *)malloc(sizeof(int)*(n+1));
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			c[i] = 0;
		}
		c[n] = 0;
		for(i=0;i<n;i++)
		{
			c[a[i]]++;
		}
		for(i=0;i<=n;i++)
		{
			if(c[i]>0)
				count = count+i;
		}
		printf("%d\n",count);
		free(a);
		free(c);
	}
	return 0;
}
