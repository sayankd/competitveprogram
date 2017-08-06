#include<stdio.h>
int main()
{
    char x[100],z,cube[6][1];
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
    for(i=0;i<6;i++)
    {
        scanf("%s",x);
        z=x[0];

        if((z=='r')||(z=='g')||(z=='o')||(z=='y'))
        {
        cube[i][0]=x[0];
        }
        else
        {
        cube[i][0]=x[3];
        }
    }
    if(((cube[0][0]==cube[2][0])&&(cube[0][0]==cube[4][0]))||((cube[0][0]==cube[2][0])&&(cube[0][0]==cube[5][0]))||((cube[0][0]==cube[3][0])&&(cube[0][0]==cube[4][0]))||((cube[0][0]==cube[3][0])&&(cube[0][0]==cube[5][0]))||((cube[1][0]==cube[2][0])&&(cube[1][0]==cube[4][0]))||((cube[1][0]==cube[2][0])&&(cube[1][0]==cube[5][0]))||((cube[1][0]==cube[3][0])&&(cube[1][0]==cube[5][0]))||((cube[1][0]==cube[3][0])&&(cube[1][0]==cube[4][0])))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
return 0;
}
