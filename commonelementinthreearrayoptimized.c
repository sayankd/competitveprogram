#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1,n2,n3,t,i,x,*a1,*a2,*a3,j,k,st;
	scanf("%d",&t);
	while(t--)
	{
		st = 0;
		scanf("%d%d%d",&n1,&n2,&n3);
		a1 = (int *)malloc(sizeof(int)*n1);
		a2 = (int *)malloc(sizeof(int)*n2);
		a3 = (int *)malloc(sizeof(int)*n3);
		for(i=0;i<n1;i++)
		{
			scanf("%d",&a1[i]);	
		}
		
                for(i=0;i<n2;i++)
                {
                        scanf("%d",&a2[i]);       
                }

                for(i=0;i<n3;i++)
                {
                        scanf("%d",&a3[i]);
                }
		i=0;
		j=0;
		k=0;
		while((i<n1)&&(j<n2)&&(k<n3))
		{
			if((a1[i]==a2[j])&&(a2[j]==a3[k]))
			{
				st = 1;
				printf("%d ",a1[i]);
				i++;j++;k++;
			}
			else if((a1[i]<=a2[j])&&(a1[i]<=a3[k]))
			{
				i++;
			}
			else if((a2[j]<=a1[i])&&(a2[j]<=a3[k]))
			{
				j++;
			}
			else
				k++;
		}
		if(st==0)
		{
			printf("-1");
		}
		printf("\n");
	}
	return 0;
}
