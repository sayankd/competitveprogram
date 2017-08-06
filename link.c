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
  new_node->next=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;

  }
  else
  {
  current->next=new_node;
  current=new_node;
  new_node->next=NULL;
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
 while(new_node->next!=NULL)
   {
   printf("%d|%d|%d--->",new_node,new_node->data,new_node->next);
   new_node=new_node->next;
   }
}
struct node* reverse(struct node *start)
{

printf("\nRev\n");
    while(start!=NULL)
    {
        printf("rev=%d\n",start->data);
        start=start->next;
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
}
