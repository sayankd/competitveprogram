#include<stdio.h>
int main()
{
    char strng[1000];
    int len,i;
    scanf("%s",strng);
    len=0;
    for(i=0;strng[i]!='\0';i++)
    {
        len++;
    }
    strng[0]="S";
    printf("%d",len);
    return 0;
}
