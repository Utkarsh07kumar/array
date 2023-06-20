#include<iostream>
using namespace std;
void solvemaze(int arr[3][3])
int main(){
    int maze[]={ {1,0,0},
                 {1,1,0},
                 {1,1,1}};
    int rows=3;
    int col=3;
    vector<vector<bool>> visited(row,vector<bool>(col,false));
    visited[0][0]=true;
    vector<string> path;
    string output="";
    solvemaze(maze,row, 0,0 ,visited,path,output);
    return 0;
}