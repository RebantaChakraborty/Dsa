#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*left;
    struct node*right;
};
struct node * create()
{
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    int x;int choice;
    printf("Enter the choice(1 to enter data and 0 to exit):\n");
    scanf("%d",&choice);
    if(choice==0)
    {
        return NULL;
    }
    else
    {
        printf("Enter the data:\n");
        scanf("%d",&x);
        newnode->data=x;
        printf("FOR THE LEFT NODE\n");
        newnode->left=create();
        printf("FOR THE RIGHT NODE\n");
        newnode->right=create();
        return newnode;

    }
    
}
void preorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
    
}
void postorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
    
}
void inorder(struct node*root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
       
    }
    
}
struct node * rightmost(struct node * root)
{
    struct node * temp;
    temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
struct node* search(struct node*root,int x)
{
    struct node * temp=root;
  if(temp==NULL)
  {
      return NULL;
  }
  if(temp->data==x)
  {
      return temp;

  }
  struct node * lefty=search(root->left,x);
  struct node * righty=search(root->right,x);
  if(lefty)
  {
      return lefty;
  }
 
   if(righty)
  {
      return righty;
  }
    
    
}
void delete_node(struct node* root,int d)
{
    struct node * r=rightmost(root);
    struct node * wanted=search(root,d);
    if(wanted)
    {
        wanted->data=r->data;
        free(r);
         printf("Element deleted\n");
    }
    else
    {
        printf("Requested element not found\n");
    
        
    }
    
}


int main()
{
    struct node * root;
    root=NULL;
    root=create();
    printf("Preorder:\n");
    preorder(root);
    printf("\n");
    printf("Postorder:\n");
    postorder(root);
    printf("\n");
    printf("Inorder:\n");
    inorder(root);
    printf("\n");
    int y;
    printf("Enter the element to be deleted");
    scanf("%d",&y);
    delete_node(root,y);
    printf("Inorder:\n");
    inorder(root);
    printf("\n");
    printf("Hello");

}
