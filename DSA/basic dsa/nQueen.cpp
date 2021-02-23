#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
using namespace std;
int board[11][11];
bool placePossible(int n,int row,int j){
    
    for(int i=row-1;i>=0;i--){
        if(board[i][j]==1){
            return false;
        }
        
    }
    for(int i=row-1,k=j-1;i>=0 && k>=0;i--,k--){
        if(board[i][k]==1){
            return false;
        }
         
    }
    for(int i=row-1,k=j+1;i>=0 && k<n;i--,k++){
        if(board[i][k]==1){
            return false;
        }
         
    }
     return true;
      

}
void nQueenHelper(int n,int row){
    if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;

    }
    for(int j=0;j<n;j++){
        if(placePossible(n,row,j)){
            board[row][j]=1;
            nQueenHelper(n,row+1);
            board[row][j]=0;
            
        }

    }
   return ; 

}
void nQueenPlacer(int n){
    memset(board,0,11*11*sizeof(int));
    nQueenHelper(n,0);
    return;

}
int main(){

   nQueenPlacer(4);
    return 0;
}