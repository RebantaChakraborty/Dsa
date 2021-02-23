#include<stdio.h>
#include<iostream>
using namespace std;
void mergeSort(int arr[],int si ,int ei){
    if(si>=ei){
        return  ;
    }
    else{
        int mi=(si+ei)/2;
        mergeSort(arr,si,mi);
        mergeSort(arr,mi+1,ei);
        int dup[(ei-si)+1];
        int i=si,j=(mi+1),k=0;;
        while(i<=mi && j<=ei){
            if(arr[i]<arr[j]){
             
             dup[k++]=arr[i++];
              
            }
            else{
                dup[k++]=arr[j++];
            }
        }
        for( ;i<=mi;i++){
            dup[k++]=arr[i];
        }
          for( ;j<=ei;j++){
            dup[k++]=arr[j];
        }
        for(int l=0;l+si<=ei;l++){
            arr[si+l]=dup[l];
        }

     return;   
    }
}
int main(){
    int r[]={3,2,1,4,0,7,-1,8};
    mergeSort(r,0,7);
    for(int i=0;i<8;i++){
        cout<<r[i]<<" ";
    }
}