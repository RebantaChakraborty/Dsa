#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the number of Elements\n");
    scanf("%d",&n);
    int arr[n];
    int nge[n];
    printf("Enter the Elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    nge[n-1]=-1;
      for(int i=0;i<n-1;i++)
    {
         for(int j=i;j<=n-1;j++)
         {
            if(arr[j]>arr[i])
            {
                nge[i]=arr[j];
                break;

            }

          }
}
int l=0;int e=arr[l];
for(int i=0;i<n;i++)
    {  
        if(arr[i]>e)
        {
            l=i;
            e=arr[l];
           
        }
        
    }

 printf("Original Array:\n");
 for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
        


    }
    printf("\n");
    
printf("Nge Array:\n");
for(int i=0;i<n;i++)
{

  arr[i]=nge[i];    
}

for(int i=0;i<n;i++)
{
 if (i!=l)
{ 
  printf("%d ",arr[i]);    
}
else
{
    printf("");
}

}
return 0;


}
 