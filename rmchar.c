#include<stdio.h>
#include<string.h>
int main()
{
	int t,count[26],i,j;
	scanf("%d",&t);
	while(t--)
	{
		i=0;
		j=0;
		char s1[50],s2[50];
		for(i=0;i<26;i++)
		{
			count[i]=0;
		}
		scanf("%s",s1);
		scanf("%s",s2);
		for(i=0;i<strlen(s2);i++)
		{
			count[s2[i]-'a']++;
		}
		for(i=0;i<strlen(s1);i++)
		{
			if(count[s1[i]-'a']==0)
			{
				
				s1[j] = s1[i];
				j++;
				//printf("%c",s1[j-1]);
			}
			
		}
		s1[j] = '\0';
		printf("%s",s1);
		printf("\n");
	}
}
