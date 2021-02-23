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
    struct node*temp;
    temp=start;
    printf("YOU ENTERED:\n");
    int x=0;
    while (temp!=NULL)
    {
      printf("%d",temp->data);
      x=x*10+temp->data;
      temp=temp->next;
    }
    printf("\n");
    int t=x;
    int s=0;
    while(t!=0)
    { 
        int r=t%10;
        s=s*10+r;
        t=t/10;

    }
    if(s==x)
    {
        printf("PALINDROME\n");

    }
    else
    {
        printf("NOT PALIDROME");
    }
    
}
int main()
{
   insert();
   insert();
   insert();
   display();
 
return 0;

}