#include<stdio.h>
#include<stdlib.h>
int BinarySearchl(int c[],int l,int r,int x)
{
	//printf("l=%d\t%d\n",l,r);
	int mid;
	if(r>=l)
	{
		mid = l+(r-l)/2;
		if((c[mid]==x)&&(c[mid-1]!=x))
			return mid;
		else if(x<=c[mid])
		{
			printf("a\n");
			return BinarySearchl(c,l,mid-1,x);
		}
		else
			return BinarySearchl(c,mid+1,r,x);
	}
	return -1;
}
int BinarySearchR(int c[],int l,int r,int x)
{
	int mid;
	//printf("l=%d\t%d\n",l,r);
	if(r>=l)
	{
		mid = l+(r-l)/2;
		if((c[mid]==x)&&(c[mid+1]!=x))
			return mid;
		else if(x>=c[mid])
			return BinarySearchR(c,mid+1,r,x);
		else
			return BinarySearchR(c,l,mid-1,x);
	}
	return -1;
}
int main()
{
	int t,n,i,x,l,r;
	int *c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&x);
		c = (int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&c[i]);
		}
		if((c[0]==x)&&(c[n-1]==x))
		{
			printf("%d\n",n);
		}
		else
		{
			l = BinarySearchl(c,0,n-1,x);
			r = BinarySearchR(c,0,n-1,x);
			if((l==-1)&&(r==-1))
				printf("-1\n");
			else
				printf("%d\n",(r-l)+1);
		}
		
	}
	return 0;
}

