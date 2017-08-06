#include<stdio.h>
int main()
{
    char s[20000];
    int n=0,i,t,a,b,c,x,v;
    scanf("%d",&t);
    while(t--)
    {
        a=0;
        b=0;
        c=0;
        n=0;
        x=0;
        v=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
        {
            n++;
        }
    if((s[0]=='{') && (s[n-1]=='}'))
        {
            printf("a");
            for(i=1;i<n-1;i++)
            {
                if(s[i]=='{')
                    {
                        a++;
                    }
                    if(s[i]=='(' && s[i+1]=='(')
                    {
                        v=1;
                    }
                    if(s[i]=='<' && s[i+1]=='(')
                    {
                        v=1;
                    }
                    else if(s[i]=='}')
                    {
                        a--;
                    }
                    else if(s[i]=='(')
                    {
                        b++;
                    }
                    else if(s[i]==')')
                    {
                        b--;
                    }
                     else if(s[i]=='<')
                    {
                        c++;
                        x++;
                    }
                     else if(s[i]=='>')
                    {
                        c--;
                    }

            }

        }
        if(x==1 && a==0 && b==0 && c==0 && v==0)
        {
            printf("No Compilation Errors\n");
        }
        else
            printf("Compilation Errors\n");
    }
        return 0;
}
