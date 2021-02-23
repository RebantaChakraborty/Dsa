#include<stdio.h>
#include<iostream>
using namespace std;
int partition(int A[], int low , int high){
   int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }

        while (A[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quickSort(int arr[],int si ,int ei){
    if(si>=ei){
        return ;
    }
    else{
    int mid=partition(arr,si,ei);
    quickSort(arr,si,(mid-1));
    quickSort(arr,mid+1,ei);
    
    }
}
int main(){
    int a[]={5,3,8,9,5,1,2,2,100,-1};
    quickSort(a,0,9);
    for(int i=0;i<=9 ;i++){
        cout<<a[i]<<" ";
    }
    

    return 0;
}