#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------
struct node
{
int data;
struct node *next;
};
//------------------------------------------------------------

struct node* create(struct node *start)
{
char ch;
 do
 {
  struct node *new_node,*current;

  new_node=(struct node *)malloc(sizeof(struct node));

  printf("nEnter the data : ");
  scanf("%d",&new_node->data);
  new_node->next=new_node;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;

  }
  else
  {
  current->next=new_node;
  current=new_node;
  new_node->next=start;
  printf("c=%d\n",start);
  }

 printf("nDo you want to creat another : ");
 ch=getche();
 }while(ch!='n');
 return start;
}
//------------------------------------------------------------------

void display(struct node *start)
{
struct node *new_node;
 printf("The Linked List : n");
 new_node=start->next;
    printf("%d|%d|%d--->",start->data,start,start->next);
 while(new_node!=start)
   {
   printf("%d|%d|%d--->",new_node->data,new_node,new_node->next);
   new_node=new_node->next;
   }
}
struct node* reverse(struct node *start)
{

printf("Rev\n");
    while(start->next!=NULL)
    {
        printf("rev=%d",start->data);
        start=start->next;
    }
};
void function(struct node* start)
{
    static int i=0;
    if(start->next!=NULL)
    {
        function(start->next);
    }
    i++;
    if(i==5)
    {
        printf("%d",start->data);
    }
};
//----------------------------------------------------
void main()
{
    struct node*start=NULL;
    struct node *rev=NULL;
start=create(start);
rev=reverse(start);
display(start);
function(start);
}
