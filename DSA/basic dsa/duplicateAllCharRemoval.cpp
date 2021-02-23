#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
int c=0;
void removeAllDuplicate(char str[] , char x){
    if(str[0]=='\0'){
        return ;
    }
    if(str[0]!=x){
        
        removeAllDuplicate(str+1,x);

    }
  
    else{
        int i;
        
        for( i=1;str[i]!='\0';i++){
          
             str[i-1]=str[i];
            

        }
        str[i-1]=str[i];
        removeAllDuplicate(str,x);
    }
}
int main(){
    char name[]="Rebanta Chakraborty";
    removeAllDuplicate(name,'a');
    cout<<name;
    return 0;
}