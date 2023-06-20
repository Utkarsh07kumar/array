#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{12,32,33,2,5,6};
    int n=arr.size();
    for(int round=1;round<n;round++)
    {
        bool swaping=false;         //optimizing bubble sort
        cout<<endl<<"ROUND:->"<<round<<endl<<endl;
        for(int j=0;j<n-round;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swaping=true;        //optimizing bubble sort
                swap(arr[j],arr[j+1]);
            }
            
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl<<endl;
        }
        if(swaping==false) break;     //optimizing bubble sort
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}