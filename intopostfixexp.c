#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,t;
	scanf("%d",&t);
	while(t--)
	{
	char str[500],stack[500];
	j=0;
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
	{
		if((str[i]=='(')||(str[i]=='+')||(str[i]=='-')||(str[i]=='/')||(str[i]=='*')||(str[i]=='^'))
		{
                       // printf("x\n");

			stack[j++]=str[i];
		}
		else if(str[i]==')')
		{
			for(k=j-1;stack[k]!='(';k--)
			{
				printf("%c",stack[k]);
				j--;
			}
			j--;
		}
		else
		{
			printf("%c",str[i]);
		}

	}
	printf("\n");
	}

             
                
return 0;
}
