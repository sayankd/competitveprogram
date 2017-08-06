#include<stdio.h>
int main()
{
    int t,a;
    scanf("%d",&t);
    while(t--)
    {
        for(a=0;a<=300;a+=17)
        {
            printf("%d=",a);
        if(a==7)
        {
            printf("1\n");
        }
        else if((a%10)==1)
        {
            printf("%d\n",(1+(a-1)/10));
        }
        else if((a%10)==2)
        {
            if(a<10)
            {
                printf("2\n");
            }
            else
            {
                printf("%d\n",2+(a-12)/10);
            }
        }
        else if((a%10)==3)
        {
            if(a<10)
            {
                printf("3\n");
            }
            else
            {
                printf("%d\n",3+(a-13)/10);
            }
        }
        else if(((a%10)==4) && (a%24)!=0)
        {
            if(a<10)
            {
                printf("4\n");
            }
            else
            {
                printf("%d\n",2+(a-14)/10);
            }
        }
        else if((a%10)==5)
        {
            printf("%d\n",(a/10)+1);
        }
        else if((a%10)==6)
        {
            if(a<10)
            {
                printf("2\n");
            }
            else
            {
                printf("%d\n",2+(a)/10);
            }
        }
        else if(((a%10)==7)&&(a>7))
        {
            printf("%d\n",(a/10)+1);
        }
        else if((a%10)==8)
        {
            if(a<10)
            {
                printf("2\n");
            }
            else
            {
                printf("%d\n",2+(a)/10);
            }
        }
        else if(((a%10)==9))
        {
            printf("%d\n",(a/10)+3);
        }

        else if(((a%10)==0))
        {
            if(a==10)
            {
                printf("1\n");
            }
            else
            {
            printf("%d\n",(a/10));
            }
        }
        else if(((a%12)==0))
        {
            printf("%d\n",2+(a/12));

        }
        }

    }
    return 0;

}
