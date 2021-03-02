#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START = NULL;
struct node* createNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return(n);
}
void insertNode()
{
    struct node *temp,*t;
    temp=createNode();
    printf("Enter a number");
    scanf("%d",&temp->info);
    temp->link=NULL;
    if(START=NULL)
    START=temp;
    else
    {
        t=START;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }

}

void deleteNode()
{
    if(START=NULL)
    printf("Linked list is empty.");
    else{
    struct node *r;
    r=START;
    START=START->link;
    free(r);
    }
}
void viewList()
{
    struct node *t;
    if(START=NULL)
    {
        printf("Linked is empty");
    }
    else
    {
        t=START;
        while(t->link!=NULL)
        {
        printf("%d",t->info);
        t=t->link;
        }
    }
}
int menu()
{
    int ch;
    printf("\nchoose your option-:");
    printf("\n1. Add value to the list");
    printf("\n2. Delete first value from the list.");
    printf("\n3. view list");
    scanf("%d",&ch);
    return (ch);
}


int main() {
    // Write C code here
   while(1)
   {
       switch(menu())
       {
           case 1:
                  insertNode();
                  break;
           case 2:
                  deleteNode();
                  break;
           case 3:
                  viewList();
                  break;


           default:
                   printf("Invalid entry");


       }
   }

    return 0;
}
