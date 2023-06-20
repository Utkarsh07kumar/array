#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int binarysearch(int arr[],int size,int target)
{
    int start=0;
    int end=size-1;
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;
    while (start<=end)
    {
        int element=arr[mid];
        if(element==target)
        {
            return mid;
        }else if(target<element)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        int mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    // int arr[]={2,4,6,8,10,12,16};
    // int size=7;
    // int target=2;
    // int targeti=binarysearch(arr,size,target);
    // if(targeti==-1){
    //     cout<<"not found"<<endl;
    // }else{
    //     cout<<"target found at "<<targeti<<endl;
    // }

    vector<int>v{1,2,3,4,5,6};
    if(binarysearch(v.begin(),v.end(),3)){
        cout<<"found "<<endl;
    }
    else{
    cout<<"not found"<<endl;
    }
    return 0;
}