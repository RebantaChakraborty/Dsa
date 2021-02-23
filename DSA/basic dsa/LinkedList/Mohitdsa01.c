#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
};
struct node*t;
 struct node*start=NULL;
void insert()
{
    struct node*temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    if(start==NULL)
    {
        start=temp;
        t=temp;

    }
    else
    {
        t->next=temp;
        t=temp;

    
    }
    t->next=NULL;
       
}
int length()
{
    struct node*temp;
    int c=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        c++;
    }
    return c;
}
void change(int k)
{
    struct node*curr;
    curr=start;
    int i=1;
    struct node*prev;
    prev=NULL;
    while(curr!=NULL)
    {
        if(i%k==0 && i>=k)
        {
            prev->next=curr->next;
            curr->next=start;
            start=curr;
            i++;
            curr=prev->next;
        }
        else
        {
         i++;
         prev=curr;
         curr=curr->next;
        }
    }
    
}
void display()
{
    struct node*temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    insert();
    display();
    change(3);
    printf("\nAfter\n");
    display();
    return 0;
}