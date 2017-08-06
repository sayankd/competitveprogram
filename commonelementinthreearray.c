#include<stdio.h>
int main()
{
	int n1,n2,n3,a[1000],b[1000],c[1000],t,i,x,stat = 0;
	scanf("%d",&t);
	while(t--)
	{
		stat = 0;
		for(i=0;i<1000;i++)
		{
			a[i] = 0;
			b[i] = 0;
			c[i] = 0;
		}
		scanf("%d%d%d",&n1,&n2,&n3);
		//a1 = (int *)malloc(sizeof(int)*n1);
		//a2 = (int *)malloc(sizeof(int)*n2);
		//a3 = (int *)malloc(sizeof(int)*n3);
		for(i=0;i<n1;i++)
		{
			scanf("%d",&x);
			a[x]++;
		}
		
                for(i=0;i<n2;i++)
                {
                        scanf("%d",&x);
                        b[x]++;
                }

                for(i=0;i<n3;i++)
                {
                        scanf("%d",&x);
                        c[x]++;
                }
		for(i=0;i<1000;i++)
		{
			if((a[i]>0)&&(b[i]>0)&&(c[i]>0))
			{
				stat = 1;
				printf("%d ",i);
			}
		}
		if(stat==0)
		{
			printf("-1\n");
		}
		printf("\n");
	}
	return 0;
}
