#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,*a,i,j,stat;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a = (int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		i =0;
		j = n-1;
		stat = 0;
		while(a[i]!=7)
		{
			if(a[i]!=a[j])
			{
				stat = 1;
				break;
			}
			if((a[i]>=8)||(a[j]>=8)||(a[i]<=0)||(a[j]<=0))
			{
				stat = 1;
				break;
			}
			if(i>=n)
			{
				//printf("a");
				stat = 1;
				break;
			}
			i++;
			j--;
			
		}
		if((a[j]!=7)||(i!=j))
		{
			stat = 1;
		}
		if(stat==1)
			printf("no\n");
		else
			printf("yes\n");
		free(a);
	}
}
