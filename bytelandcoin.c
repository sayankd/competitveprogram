#include<stdio.h>
long long int arr[500000]={0};
long long int sum(long long int a)
{
	long long int n = 500000;
	long long int t;
	if((a<n)&&(arr[a]!=0))
		return arr[a];
	if(a>=((a/2)+(a/3)+(a/4)))
		return a;
	else
	{
		t = sum(a/2)+sum(a/3)+sum(a/4);
		if(a<n)
		{
			arr[a] = t;
			return t;
		}
		else
			return t;
	}
}
int main()
{
	long long int n,t;
	while((scanf("%lld",&n))!=EOF)
	{
		t = sum(n);
		printf("%lld\n",t);			
	}
	return 0;
}  
