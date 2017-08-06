#include<stdio.h>
int queue_array[1000];
int rear = - 1;
int front = - 1;
void insert(int add_item)
{
    if (rear == 1000 - 1)
        printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

int delete()
{
        int res;
        if (front == - 1 || front > rear)
        {
            printf("Queue Underflow \n");
            return ;
        }
        else
        {
        res=queue_array[front];
        front = front + 1;
        return res;
        }
}

int main()
{
    int n,q,i,j,x,y,s,t;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%d%d",&n,&q);
    int a[n][n],visited[n],distance[n];
    for(i=0;i<n;i++)
    {
        visited[i]=0;
        distance[i]=-1;
        for(j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
    for(i=0;i<q;i++)
    {
        scanf("%d%d",&x,&y);
        a[x-1][y-1]=1;
        a[y-1][x-1]=1;
    }
    /*for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }*/
    scanf("%d",&s);
    s=s-1;
    visited[s]=1;
    distance[s]=0;
    insert(s);
    while((rear-front)>=0)
    {
        s=delete();
        for(i=0;i<n;i++)
        {
            if((a[s][i]==1)&&(visited[i]==0))
            {
                visited[i]=1;
                if(distance[i]==-1)
                {
                    distance[i]=6+distance[s];
                }
                else
                {
                    distance[i]=distance[s]+6;
                }
                insert(i);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(distance[i]!=0)
        {
        printf("%d ",distance[i]);
        }
    }
    rear = - 1;
    front = - 1;
    printf("\n");
    }
    return 0;

}
