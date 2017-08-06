#include<stdio.h>
#include<string.h>
int main()
{
	int t,c,k,j,i;
	char s[10000];
	char y[2],x;	
	scanf("%d",&t);
	while(t--)
	{
		j = 0;
		c = 0;
		scanf("%s",s);
		scanf("%s",y);
		x = y[0];
		printf("%c\n",x);
		scanf("%d",&k);
		for(i=0;i<strlen(s);i++)
		{
			if((c<k)&&(s[i]==x))
			{
				c++;
			}
			else if(c==k)
			{
				s[j++] = s[i];
			}
			
		}
		if((c<k)||j==0)
			printf("Empty string");
		else
		{
		s[j] = '\0';
		for(i=0;i<j;i++)
		{
			printf("%c",s[i]);
		}
		printf("\n");
		}
	}
}
