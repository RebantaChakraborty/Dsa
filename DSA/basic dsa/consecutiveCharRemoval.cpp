#include<iostream>
#include<stdio.h>
using namespace std;
void consecutiveCharRemoval(char str[],int size){
    if(size<=1){
        return;
    }
    if(str[0]!=str[1]){
        consecutiveCharRemoval(str+1,size-1);
    }
    else{
        int i;
        for( i=1;str[i]!='\0';i++){
            str[i-1]=str[i];
        }
        str[i-1]=str[i];
        consecutiveCharRemoval(str,size-1);
    }
}
int main(){
    char arr[]="aabbbbbbb";
    consecutiveCharRemoval(arr,9);
    cout<<endl<<arr;
    


    return 0;
}