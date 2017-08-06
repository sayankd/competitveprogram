#include<stdio.h>
int main()
{
int t,n,i,count,max;
scanf("%d",&t);
while(t--)
{
max=0;
count=0;
scanf("%d",&n);
char a[n];
char b[n];
int c[n+1];
scanf("%s",a);
scanf("%s",b);
for(i=0;((a[i]!='\0')&&(b[i]!='\0'));i++)
{
if(a[i]==b[i])
{
count++;
}
printf("\tc=%d\t",count);
}
for(i=0;i<n+1;i++)
{
scanf("%d",&c[i]);
}
if(count==0)
{
printf("%d\n",c[0]);
}

else
{
for(i=0;i<count+1;i++)
{
if(c[i]>max)
{
max=c[i];
}
}
printf("%d\n",max);
}
}
return 0;
}
