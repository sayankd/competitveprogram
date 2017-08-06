#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],b[100];
	int i,j,t,k,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		scanf("%s",a);
		
		for(i=0;i<k-1;i++)
		{
			scanf("%s",b);
			c=0;
			j=0;
			while((a[j]!='\0')&&(b[j]!='\0'))
			{
				if(a[j]==b[j])
				{
					//printf("%c",a[j]);
					a[c++] = a[j];
				}
				if(a[j]!=b[j])
					break;
				j++;
			}
			a[c] = '\0';
			//printf("%s\t%d\n",a,c);
		}
		if(a[0]=='\0')
			printf("-1");
		else
			printf("%s",a);
		printf("\n");
	}
}
