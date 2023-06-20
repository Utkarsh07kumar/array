#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{5,41,13,24,11,2,111,11,21,2};
    int n=arr.size();

    // selection sort   
    // time
    // for(int i=0;i<n-1;i++)
    // {
    //     int minIndex=i;
    //     for(int j=i+1;j<n;j++)
    //     {
    //         if(arr[j]<arr[minIndex])
    //         {
    //             minIndex=j;
    //         }
    //     }
    //     // swap
    //     swap(arr[i],arr[minIndex]);
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }

    // bubble sort
    // for(int i=1;i<n;i++)
    // {
    //     bool flag=false;
    //     for(int j=0;j<n-i;j++)
    //     {
    //         if(arr[j]>arr[j+1])
    //         {
    //             flag=true;
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    //     if(flag==false){
    //         break;
    //         // sort ho chuka hai so no need to sort
    //     }
    // }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // insertion sort
    int j;
    for(int i=1;i<n;i++)
    {
        // step 1
        int val=arr[i];
        // step 2
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>val){
                //step 3 shift
                arr[j+1]=arr[j];

            }else
            {
                break;
            }
        }
        // step 4 copy
        arr[j+1]=val;

    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}