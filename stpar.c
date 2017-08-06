#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	while(n!=0)
	{
	int stack[10000],a,tos,j,q[10000],f,r;
	tos=0;
	f=0;
	r=-1;
	j=n+1;
	stack[tos]=j;
	for(i=0;i<n;i++)
	{

	scanf("%d",&a);
	q[++r]=a;
	}
for(i=1;i<=n;i++)
{
	while(f<=r)
	{
		//printf("x=%d%d\n",q[f],i);
		if(q[f]==i)
		{
			//printf("a\n");
			f++;
			j=0;
			break;
		}
		else if(stack[tos]==i)
		{
			tos--;
			j=0;
			break;
		}
		else
		{	
			j=1;
			if(stack[tos]>q[f])
			{
				//printf("b\n");
				stack[++tos]=q[f++];
			}
			else
			{
				//printf("%d%d\n",stack[tos],q[f]);
				printf("no\n");
				j=-1;
				break;
			}
		}
	}
	//printf("i=%d\n",i);

	if(j==0)
	{
		//printf("d\n");
		continue;
	}
	if(j==-1)
	{
		break;
	}
}
	//for(i=f;i<=r;i++)
	//{
	//	printf("%d",q[i]);
	//}
	//printf("i=%d\n",i);

	if((i-1)==n)
	{
	printf("yes\n");
	}
	scanf("%d",&n);
}
	if(n==0)
	{
	return 0;
}
	
}
