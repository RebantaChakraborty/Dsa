#include<stdio.h>
#include<stdlib.h>
void insertion_sort(int arr[],int n)
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
    printf("The sorted array is:\n");
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


}
int main()
{
    int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);

}