#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j;
    int brr[2*n]
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            printf("%d\t",arr[i]+arr[j]);
        }
    }
    return 0;
}
