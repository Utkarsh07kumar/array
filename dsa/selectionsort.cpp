#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,5,4,8,2,56,7,2};
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            // if mini
            if(arr[mini]>arr[j])
            {
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
        cout<<"round "<<i<<endl;
        for(int k=0;k<n;k++) cout<<arr[k]<<" ";
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}