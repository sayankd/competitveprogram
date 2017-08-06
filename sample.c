#include<stdio.h>

void swap (char *x, char *y)
{
    printf("%d\t%d\n",x,y);
    char *t = x;
    x = y;
    y = t;
    printf("%s\t%s\n",x,y);
}

int main()
{
    char *x = "geeksquiz";
    char *y = "geeksforgeeks";
    char *t;
    swap(x, y);
    printf("(%s, %s)", x, y);
    t = x;
    x = y;
    y = t;
    //printf("\n(%s, %s)", x, y);
    return 0;
}
