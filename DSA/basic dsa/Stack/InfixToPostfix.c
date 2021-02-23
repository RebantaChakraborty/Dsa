#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack
{
    int top;
    int size;
    char * arr;


};
int isEmpty(struct  stack*ptr)
{
    if(ptr->top==-1)
    {
        return 1;

    }
   else
    {
         return 0;
    }

}
int isFull(struct  stack*ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;

    }
   else
    {
         return 0;
    }
}
void push(struct stack*ptr,char item)
{ 
      if(isFull(ptr))
    {
        printf("Stack is Full\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=item;

    }
    


}
char pop (struct  stack*ptr)

{
    if(isEmpty(ptr))
     {
          printf("Stack underflow\n");
     }
     else
     {
          char t;
          t=ptr->arr[ptr->top];
          ptr->top--;
         
          return t;
     }
}

void peek(struct stack*ptr,int pos)

{
    if((ptr->top+1-pos<0)||(pos<=0) )
     {
          printf("Invalid position entered\n");
     }
     else
     {
         printf("%c:is the value\n",ptr->arr[ptr->top+1-pos]);
     }
     
    
}
void display(struct stack*ptr)
{
    for(int i=1;i<=ptr->top+1;i++)
    {
        printf("At position %d , %c is the value\n",i,ptr->arr[ptr->top+1-i]);

    }

}
int Stacktop(struct stack*ptr)
{
    return ptr->arr[ptr->top];
}
int precedence(char ch)
{
    if((ch=='*' )||(ch=='/'))
    {
        return 3;
    }
    else if((ch=='+' )||(ch=='-'))
    {
        return 2;
    }
    else
    {
        return 0;
    }
    
}
int isOperator(char ch)
{
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
char * InfixToPostfix(char * infix)
{
    struct stack * s = (struct stack*)malloc(1*sizeof(struct stack));
    
    s->size=35;
    s->top=-1;
    s->arr=(char*)malloc(s->size*sizeof(char));
    char * postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
    int i=0;//for infix counter
    int j=0;//for postfix counter
    while(infix[i]!='\0')
    {
        if(!isOperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;j++;
        }
        else
        {
            if(precedence(infix[i])>precedence(Stacktop(s)))
            {
                push(s,infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop(s);
                j++; 

            }
        }
        
    }
    while(!isEmpty(s))
    {
        postfix[j]=pop(s);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(void)
{
   char infix[25]="x-y/z-k*d";
   printf("POSTFIX:%s",InfixToPostfix(infix));
    return 0;
}

