#include<iostream>
using namespace std;
int checkkey(string& str,int i,int& n,char& key){
    if(i>=n) return -1;
    if(str[i]== key) return i;
    return checkkey(str,i+1,n,key);
}

void findMax(int arr[],int n,int i,int& maxi){
    if(i>=n){
        return;
    }
    if(arr[i]>maxi)
    {
        maxi=arr[i];
    }
    findMax(arr,n,i+1,maxi);
}

void findMin(int arr[],int n,int i,int& mini){
    if(i>=n){
        return;
    }
    mini=min(mini,arr[i]);
    findMin(arr,n,i+1,mini);
}

void printarr(int arr[],int n, int i){
    if(i>=n){
        return;
    }
    
    printarr(arr,n,i+1);
    cout<<arr[i]<<" ";
}
int stair(int n){
    if(n==0) return 1;
    if(n==1) return 1;
    return stair(n-1)+stair(n-2);

}
void printalldigit(int n){
    if(n==0) return;
    cout<<n%10;
    printalldigit(n/10);
    
}
int fib(int n){
    // base condition
    if(n==1) return 0;
    if(n==2) return 1;
    // recursive relation
    return fib(n-1)+fib(n-2);
}

int factorial(int n){
    // base case
    if(n==1)
    {
        return 1;
    }
    int ans=n*factorial(n-1);
    return ans;   
}
int main(){
    // int ans= factorial(n);
    // cout<<ans<<endl;
    // int n;
    // cin>>n;
    // // printalldigit(n);
    // int ans=stair(n);
    // cout<<ans<<endl;
    // int arr[5]={10,20,30,40,50};
    // int n=5;
    // int i=0;
    // printarr(arr,n,i);
    // int arr[]={12,33,32,43,22,12,34,67,56,91,29};
    // int n=11;
    // // int maxi=INT16_MIN;
    // int mini=INT32_MAX;
    // int i=0;
    // findMin(arr,n,i,mini);
    // cout<<mini<<" ";
    string str="utkarshkumar";
    int n=str.length();
    char key='z';
    int i=0;
    int ans=checkkey(str,i,n,key);
    cout<<ans<<endl;
    return 0;
}