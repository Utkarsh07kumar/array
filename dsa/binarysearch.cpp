#include<iostream>
#include<vector>
using namespace std;
int binarysearch(int arr[],int n, int target)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    while(s<=e){
        int element=arr[mid];
        if(element== target) return mid;
        else if(element>target)  e=mid-1;
        else s=mid+1;
        mid=(s+e)/2;
    }
    return -1;
}
int firstappear(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;
    int index;
    while (s<=e)
    {
        int element=arr[mid];
        if(element==key)
        {
            index=mid;
            e=mid-1;
        }
        else if(element>key)  e=mid-1;
        else s=mid+1;
        mid=(s+e)/2;
    }
    return index;
    
}

int main()
{
    int arr[]={1,2,3,4,5,5,5,5,5,6,7,8,9,10};
    int n=14;
    int key=5;
    // int ans=binarysearch(arr,n,key);
    // if(ans==-1) {
    //     cout<<"not found"<<endl;
    // }  
    // else{
    //     cout<<ans+1;
    // }
    int ans=firstappear(arr,n,key);
    cout<<ans;
}