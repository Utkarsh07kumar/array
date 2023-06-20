#include<iostream>
using namespace std;
bool issafe(int value,int board[][9],int i,int j){
    // row check
    for(int col=0;col<9;col++){
        if(board[i][col]== value) return false;
    }
    // col check
    for(int row=0;  row<9;row++){
        if(board[row][j]== value) return false;
    }
    // box check
    for(int i=0;i<9;i++){
        if(board[3*(curr)][]== value) return false;
    }
    return true;

}
bool solve(int board[9][9],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            // empty cell
            if(board[i][j]==0)
            {
                for(int value=1;value<=9;value++)
                {
                    // check for safety
                    if(issafe(value,board,i,j))
                    {
                        board[i][j]=value;
                        // recursion
                        bool solution=solve(board,n);
                        if(solution==true) return true;
                        // backtrack
                        board[i][j]=0;
                    }
                }
            }
        }

    }
    return false;
}
int main(){
    int arr[9][9]={
        {4,5,0,0,0,0,0,0,0},
        {0,0,2,0,7,0,6,3,0},
        {0,0,0,0,0,0,0,2,8},
        {0,0,0,9,5,0,0,0,0},
        {0,8,6,0,0,0,2,0,0},
        {0,2,0,6,0,0,7,5,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0}
        }
    int n=9;
    solve(board,n);
     for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<board[i][j]

        }
    }

}