#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,*c,a[10000],i,x,s;
	scanf("%d",&t);
	while(t--)
	{
		s=0;
		for(i=0;i<10000;i++)
		{
			a[i] = 0;
		}
		scanf("%d",&n);
		scanf("%d",&x);
		c = (int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
			a[c[i]]++;
		}
		for(i=0;i<n;i++)
		{
			if((a[c[i]-x]>0)&&((c[i]-x)>0))
			{
				printf("%d\n",c[i]-x);
				s = 1;
				break;
			}
		}
		if(s==1)
			printf("yes\n");
		else
			printf("no\n");
		free(c);
	}
	return 0;
}
