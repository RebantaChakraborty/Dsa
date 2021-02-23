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

    temp=start;
    while(temp!=NULL)
    {
       c++;
       temp=temp->next;
 
    }
    return c;
}
void swap(int k)
{
    struct node*prev=(struct node*)malloc(sizeof(struct node));
    struct node*curr=(struct node*)malloc(sizeof(struct node));
    int l=length();
    printf("LENGTH=%d\n",l);
    if(l<k)
    {
        printf("ERROR\n");
        exit(1);
    }
    else if(k==l)
    {
       curr=start;
       prev=start;
       
       for(int i=1;i<k;i++)
       {
           curr=curr->next;
       }
       int t=curr->data;
       curr->data=prev->data;
       prev->data=t;

    }
    else if(l>k)
    { curr=start;
       prev=start;
       
       for(int i=1;i<k;i++)
       {
           curr=curr->next;
       }
       int t=curr->data;
       curr->data=prev->data;
       prev->data=t;
       int x=0;
       while(curr!=NULL)
       {  
           if(x==k)
           {
               x=0;
               int t=curr->data;
               curr->data=prev->data;
               prev->data=t;
              


           }
           x++;
           curr=curr->next;
           prev=prev->next;

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
    insert();
    display();
    swap(3);
    display();
    return 0;
}