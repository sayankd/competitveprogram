#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
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
  }

 printf("nDo you want to creat another : ");
 ch=getche();
 }while(ch!='n');
 return start;
}
void display(struct node *start)
{
struct node *new_node;
 printf("The Linked List : n");
 new_node=start->next;
    printf("%d--->",start->data);
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
}
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
        printf("5th value is %d",start->data);
    }
};
void main()
{
struct node*start=NULL;
start=create(start);
function(start);
}
