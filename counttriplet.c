#include<stdio.h>
#include<stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,i,j,k,*a,count,x;
	scanf("%d",&t);
	while(t--)
	{
		count = 0;
		scanf("%d",&n);
		scanf("%d",&x);
		a = (int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		qsort(a,n,sizeof(int),cmpfunc);
		k = n-1;
		for(i=0;i<n;i++)
		{

			for(j=i+1;j<n;j++)
			{
				while(((a[i]+a[j]+a[k])>=x)&&(j<k))
				{
					//printf("k=%d\n",k);
					k--;
				}
				if(k-j>0)
				{
				//printf("k=%d\t%d\t%d\n",k,i,j);
				count = count+(k-j);
				break;
				}
			}
		}
		printf("%d\n",count);
		free(a);
		
	}
	return 0;
}
