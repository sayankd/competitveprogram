#include<stdio.h>
int main()
{
	int n,t,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int a[n][n];
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		for(i=n-1;i>=0;i--)
		{
			for(j=0;j<n;j++)
			{
				printf("%d ",a[j][i]);
			}
		}
		printf("\n");
	}

}
