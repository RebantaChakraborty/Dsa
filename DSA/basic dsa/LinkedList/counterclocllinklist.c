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
void display()
{
    printf("\n");
    struct node*temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void counter(int k)
{
    struct node*prev;
    struct node*curr;
    struct node*temp;
    prev=start;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=start;
    for(int i=1;i<=k;i++)
    {
        prev=prev->next;
    }
    start=prev->next;
    prev->next=NULL;
    printf("\n");



}
int main()
{
    insert();
    insert(); 
    insert(); 
    insert(); 
    insert();
    display();
    counter(2);
    display();
    return 0; 
}