#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int length(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    else{
        int l=length(str+1);
        return l+1;
    }
}
int main(){
  char arr[]="Rebanta Chakraborty";
  int k=length(arr);
  cout<<"Length :"<<k;

    return 0;
}