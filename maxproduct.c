#include<stdio.h>
#include<stdlib.h>
int main()
{
	int t,n,*a,i,p,q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a = (int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		p = 0;
		for(i=1;i<n;i++)
		{
			if(a[i]>a[p])
			{
				p = i;
			}
		}
		q = a[0];
		a[0] = a[p];
		a[p] = q;
		p = 1;
		for(i=2;i<n;i++)
                {
                        if(a[i]>a[p])
                        {
                                p = i;
                        }
                }
		q = a[1];
		a[1] = a[p];
		a[p] = q;
		printf("%d\n",a[0]*a[1]);
	}
}
