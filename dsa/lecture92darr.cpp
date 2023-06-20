#include<iostream>
#include<vector>
using namespace std;
bool findkey(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }else
            return false;
        }
        cout<<endl;
    }
}
void printrowsum(int arr[][3],int rows,int col){
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            // row wise
            sum+=arr[i][j];
            // col wise
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }   
}
void printarr(int arr[][3],int rows,int col){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            // row wise
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int getmax(int arr[][3],int rows,int cols){
    int maxi=INT16_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>=maxi){        // row wise
            maxi=arr[i][j];
            }
        }
    }return maxi;
}
int getmin(int arr[][3],int rows,int cols){
    int mini=INT16_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<=mini){        // row wise
            mini=arr[i][j];
            }
        }
    }return mini;
}
void transpose(int arr[][3],int rows,int col){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(i<=j){
            swap(arr[i][j],arr[j][i]);
        }
        cout<<endl;
    }
}
int main(){
    // declare 2d array
    // int arr[3][3];
    // // initialisation
    // int brr[3][3]={
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}};
    // // cout<<brr[1][2];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         // row wise
    //         // cout<<brr[i][j]<<" ";
    //         // column wise
    //         cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // } 
    // int arr[4][3];
    // int rows=4;
    // int col=3;
    // input row wise
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[i][j];
    //         // col wise
    //         // cin>>arr[j][i];
    //     }
    // }
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         // row wise
    //         cout<<arr[i][j]<<" ";
    //         // column wise
    //         // cout<<brr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // } 
    // row sum
    // int arr[3][3];
    // int rows=3;
    // int col=3;
    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // printarr(arr,rows,col);
    // printrowsum(arr,rows,col);
    // int key =1;
    // cout<<endl<<endl<<findkey(arr,3,3,key); 
    // cout<<getmax(arr,rows,col)<<endl;
    // cout<<getmin(arr,rows,col);
    // transpose(arr,rows,col);

// *****************************************************
    // vector<vector<int> >arr;
    // vector<int>a{1,2,3};
    // vector<int>b{4,5,6,5,5};
    // vector<int>c{7,8,9};
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int>arr;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}