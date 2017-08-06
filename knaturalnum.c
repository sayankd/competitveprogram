#include <stdio.h>

int main() {
	int t,n,*a,i,k,c[10000],z;
	scanf("%d",&t);
	while(t--)
	{
	    //printf("a");
	    scanf("%d",&n);
	    scanf("%d",&k);
	    for(i=1;i<=10000;i++)
	    {
	        c[i] = 0;
	    }
	    //a = (int *)malloc(sizeof(int)*n);

	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&z);
	        if((z>0))
	        {
	            //printf("aa\n");
	            c[z]++;
	        }
	    }
	    i=1;
	    //printf("a=%d",k);
	    while(k>0)
	    {
	        //printf("b");
	        //printf("%d",c[i]);
	        if(c[i]==0)
	        {
	            k--;
	            printf("%d ",i);
	        }
	        i++;
	    }
	    
	    printf("\n");
	}
	return 0;
}
