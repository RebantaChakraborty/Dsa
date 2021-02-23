#include<stdio.h>
#include<stdlib.h>
void ascendingsort(int a[],int n)
{
    int f=0;
    for(int i=0;i<n-1;i++)
    {
        printf("Working on pass number %d\n",i+1);
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                f=-1;
            }
        }
        if(i==0 && f==0)
        {
            printf("The elements are already sorted\n");
            return;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }   
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("The sorted elements are:\n");
   ascendingsort(arr,n);
   return 0;
}