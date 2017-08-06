#include <stdio.h>
#define MAX 100

int main()
{
    int n, i, array[MAX];
    char num[MAX];
    int res;

    printf("Enter a list of integers [ctrl+d] to end\n");

    for(i = 0; i <= MAX; ++i){
        printf("> ");
    fgets(num, sizeof(num), stdin);
    puts(num);
    res = sscanf(num, "%d", &n);
     printf("%d\n",n);
    printf("%d\n",res);
    if(res != 1)
     break;

        array[i] = n;
    }
    puts ("");

    int z;
    for (z = 0; z < i; z++)
        printf("The array is %d\n", array[z]);

    return 0;
}
