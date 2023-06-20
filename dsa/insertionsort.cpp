#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{12,33,4,33,22,16,89,76,45,6,89,75};
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
        int val=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>val)
            {
                arr[j+1]=arr[j];
            }
            else break;
        }
        arr[j+1]=val;
    }
    for(int i=0;i<n;i++)
    {
            cout<<arr[i]<<" ";
        }
    return 0;
}