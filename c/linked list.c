#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node* start=NULL;
struct node* createnode()
{
    struct node *n;
    n=(struct node*) malloc(sizeof(struct node));
    return(n);
};
void insertnode()
{
    struct node* temp,*t;
    temp = createnode();
    printf("enter number");
    scanf("%d",&temp->info);
    temp->link = NULL;
    if(start==NULL)
        start= temp;
    else
    {
        t = start;
        while(t->link!= NULL)
            t= t->link;
            t->link = temp;

    }
}
void deletenode()
{
    struct node *r;
    if(start==NULL)
        printf("list is empty");
    else
    {
        r=start;
        start = start->link;
    }
    free(r);
}
void viewlist()
{
    struct node *t;
    if (start=NULL)
    printf("list is empty");
    else
    {
        t = start;
        while(t != NULL)
        {
            printf("%d", t->info);
            t = t->link;
        }
    }

}
int menu()
{
    int cn;
    printf("\n1. add value to the list");
    printf("\n2. delete first value");
    printf("\n3. view list");
    printf("\n4. exit");
    printf("\n\n enter your choice");
    scanf("%d",&cn);
    return(cn);

}
void main()
{
    while(1)
    {
        system("cls");
        switch(menu())
        {
            case 1: insertnode(); break;
            case 2: deletenode(); break;
            case 3: viewlist(); break;
            case 4: exit(0);
            default:
                printf("invalid choice");
        }
    }
}
