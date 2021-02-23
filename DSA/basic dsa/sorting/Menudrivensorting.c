#include<stdio.h>
#include<stdlib.h>
void bubbleascendingsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void bubbledesendingsort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
void insertion_sort_ascending(int arr[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
       
    }
}
void insertion_sort_descending(int arr[],int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]<key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
       
    }
}
void selection_sort_ascending(int arr[],int n)
{
   int indexofmin,temp;
   for(int i=0;i<n-1;i++)
   {
       indexofmin=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]<arr[indexofmin])
           {
               indexofmin=j;

           }
       }
           temp=arr[i];
           arr[i]=arr[indexofmin];
           arr[indexofmin]=temp;
       
   }
}
void selection_sort_descending(int arr[],int n)
{
   int indexofmin,temp;
   for(int i=0;i<n-1;i++)
   {
       indexofmin=i;
       for(int j=i+1;j<n;j++)
       {
           if(arr[j]>arr[indexofmin])
           {
               indexofmin=j;

           }
       }
           temp=arr[i];
           arr[i]=arr[indexofmin];
           arr[indexofmin]=temp;
       
   }
}
void display(int arr[],int n)
{
    printf("THE ARRAY IS:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the  elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int choice;
    int type;
  
    int breaker=1;
    while(1)
    {
     printf("PRESS 1 FOR BUBBLE SORT\nPRESS 2 FOR INSERTION SORT\nPRESS 3 FOR SELECTION SORT\nPRESS 4 TO DISPLAY:\n");
     scanf("%d",&choice);
     printf("PRESS 1 FOR ASCENDING AND 2 FOR DESCENDING SORTING\n");
     scanf("%d",&type);
     switch(choice)
     {
         case 1:if(type==1)
                {
                    bubbleascendingsort(a,n);break;
                }
                else if(type==2)
                {
                    bubbledesendingsort(a,n);break;
                }
                else
                {
                    printf("INVALID INPUT\n");break;
                }
        case 2:if(type==1)
                {
                    insertion_sort_ascending(a,n);break;
                }
                else if(type==2)
                {
                    insertion_sort_descending(a,n);break;
                }
                else
                {
                    printf("INVALID INPUT\n");break;
                }
        case 3:if(type==1)
                {
                    selection_sort_ascending(a,n);break;
                }
                else if(type==2)
                {
                   selection_sort_descending(a,n);break;
                }
                else
                {
                    printf("INVALID INPUT\n");break;
                }
        case 4:display(a,n);break;
        default:printf("INVALID INPUT FOR SWITCH CASE\n");break;
      }
     printf("PRESS 0 TO EXIT ELSE PRESS 1\n");
     scanf("%d",&breaker);
      if(breaker==0)
      {
          break;
      }
    }

                
                   
    
return 0;
    
}