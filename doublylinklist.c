#include<stdio.h>
#include<stdlib.h>
//-------------------------------------------------
struct node
{
struct node *left;
int data;
struct node *right;
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
  new_node->left=NULL;
  new_node->right=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;

  }
  else
  {
  current->right=new_node;
  new_node->left=current;
  current=new_node;
  new_node->right=start;
  start->left=new_node;
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
 new_node=start;
 printf("%d|%d|%d|%d--->",start->left,start,start->data,start->right);
 new_node=start->right;
 while(new_node!=start)
   {
   printf("%d|%d|%d|%d--->",new_node->left,new_node,new_node->data,new_node->right);
   new_node=new_node->right;
   }
   printf("\n");
}
void pop(struct node *start)
{
    struct node *x;
    struct node*y;
    if(start==NULL)
    {
        printf("Underflow");
    }
    else
    {
        x=start->left;
        printf("%d\n",x->data);
        y=x->left;
        free(x);
        y->right=start;
        start->left=y;
    }
}

//----------------------------------------------------
void main()
{
    struct node*start=NULL;
start=create(start);
display(start);
pop(start);
display(start);
}

