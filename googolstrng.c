#include<stdio.h>
int main()
{
    int x=1,y,i=0;;
    while(y<100000)
    {
        x=(2*x)+1;
        i++;
    }
    printf("%d",i);
    return 0;

}
