#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};


void createNode(struct node **s);
void displayNode(struct node **s);
void insertLast(struct node **s);
struct node* find(struct node **s);

int main()
{
    int k;
struct node *START=NULL,*ptr;
//printf("\n5. Exit");
while(1){
        system("cls");
printf("choose the operation you want to perform.\n");
printf("\n1. Add a node to the Begining.\n");
printf("\n2. Add a node to the End.\n");
printf("\n3. Display the whole list.\n");
printf("\n4. Search for a particular Node.\n");
printf("\n1. choose one of given option");
scanf("%d",&k);
switch(k)
{
  case 1:
          createNode(&START);
          break;
  case 2:
          insertLast(&START);
          break;
  case 3:
          displayNode(&START);
          break;
  case 4:
          ptr=find(&START);
          printf("\naddress of your node is %u with data equals to %d.\n",ptr,ptr->data);;
          break;

  default:
           printf("\nInvalid input.\n");
}
}

return 0;
}

void createNode(struct node **s)
{
 struct node *p;
 int k;
 p=(struct node*)malloc(sizeof(struct node));
 printf("Enter an integer");
 scanf("\n%d",&k);
 p->data=k;
 if(*s==NULL)
    {
      p->next=NULL;
      *s=p;
    }
  else
    {
    p->next=*s;
    *s=p;
    }
    //printf("\n%u\n",*s);
}

void displayNode(struct node **s)
{
    struct node *t;
     t=*s;
 if(t==NULL)
    {printf("\nLinked list is empty.\n");}
 else
    {
     while(t!=NULL)
        {
        printf("\n%d",t->data);
          t=t->next;
        }
    }
    //printf("\n%u",*s);
}

void insertLast(struct node **s)
{
    int k;
struct node *p,*t,*x=NULL;
p=malloc(sizeof(struct node));
printf("\nenter a number to be added at last node in the list.\n");
scanf("%d",&k);
p->data=k;
p->next=NULL;
t=*s;
if(*s==NULL)
    {
     *s=p;
    }
else
    {
    while(t!=NULL)
        {
            x=t;
         t=t->next;
        }
    x->next=p;
    }
}

struct node* find(struct node **s)
{
    int k;
  struct node *t;
  printf("\nEnter the data you want to serach.\n");
  scanf("%d",&k);
  t=*s;
  if(t==NULL)
    printf("\nlinked list is  currently empty.\n");
  else
    {
      while(t!=NULL)
      {
          if(t->data==k)
            return (t);
          t=t->next;
      }
      printf("\nyour input data is not exist in list.\n");
    }

    }


