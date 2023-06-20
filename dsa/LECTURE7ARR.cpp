#include<iostream>
using namespace std;
bool linerSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
            break;
        }
    }return false;
}
int main(){
    // int arr[]={2,4,6,8};
    // char a[106];
    // int ar[166];
    // char arra[2]
    // cout<<arr<<endl;    //base address
    // cout<<&arr<<endl;    //base address
    // *************************************************************
    // int arr[]={2,4,6,8};
    // char arr[]={'a','b','c'};
    //  int arr[10]={2,4,5,6}
    // cout<<"array initialize successfully"<<endl;
    //***************************************************************
    // int arr[]={2,4,6,8};
    // cout<<arr[0]<<arr[1]<<arr[2]<<arr[3];
    // for(int i=0; i<4;i++){
    //     cout<<arr[i];
    // }
    // **************************************************
    // int n; 
    // cin>>n;
    // int arr[n];            //bad practices
    // int arr[10];
    // cout<<"Enter the input values in array"<<endl;
    // for(int i=0;i<10;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<10;i++){
    //     cout<<arr[i];
    // }    
    // *******************************************
    // int arr[5000];
    // int n;
    // cout<<"how many number you want bitch"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"double of array"<<endl;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<2*arr[i]<<" ";
    // }
    // *********************************************************
    // int arr[5000];
    // int n;
    // cout<<"how many number you want bitch"<<endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++)
    // {
    //     arr[i]=1;
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // ********************************************************* 
    // linear search in array
    // int arr[5]={1,3,7,8,5};
    // int size=5;
    // int key;
    // cout<<"enter the element"<<endl;
    // cin>>key;
    // if(linerSearch(arr,size,key)){
    //     cout<<"found";
    // }else
    // cout<<"not found";
    // ********************************************
// int arr[]={0,1,1,1,0,0,1,1,0,1,1,1,0,0,1};
// int size=15;
// int numzero=0;
// int numone=0;
// for(int i=0;i<size;i++){
//     if(arr[i]==0){
//         numzero++;
//     }if(arr[i]==1){
//         numone++;
//     }
// }
// cout<<numzero<<" 0"<<endl<<numone<<" 1";
// ***************************************
//   int arr[]={10,20,30,40,50,60,70};
//   int size=7;
//   int start=0;
//   int end=size-1;
//   while(start<=end){
//     if(start>end)
//         break;
//     if(start == end){
//         cout<<arr[end]<<" ";
//     }else
//     {
//         cout<<arr[start]<<" "<<arr[end]<<" ";}
//     start++;
//     end--;
//   }
//   ************************************************
// reverse an array
// int arr[]={10,20,30,40,50,60,70,80};
// int size=8;
// int start=0,end=size-1;
// while(start<=end){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
// }
// for(int i=0;i<size;i++){
//     cout<<arr[i]<<" ";
// }
return 0;
}