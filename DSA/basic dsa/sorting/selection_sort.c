#include<stdio.h>
#include<stdlib.h>
void selection_sort(int arr[],int n)
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
   printf("\nThe sorted array is:\n");
    for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }

}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elemets\n");
    int a[n];
    for(int i=0;i<n;i++)   
    {
        scanf("%d",&a[i]);
    }
    printf("The elements are:\n");
     for(int i=0;i<n;i++)   
    {
        printf("%d ",a[i]);
    }
     selection_sort(a,n);

    
 return 0;       
}