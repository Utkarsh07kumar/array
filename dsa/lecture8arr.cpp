#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    // create vector
    // vector<int>arr;
    // // int ans =(sizeof(arr)/sizeof(int));
    // // cout<<ans<<endl;
    // cout<<arr.size()<<endl;   //stored element space
    // cout<<arr.capacity()<<endl;   //storage space
    // arr.push_back(5);
    // arr.push_back(6);
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // arr.pop_back();
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // unique element
    // int n;
    // cout<<"enter the number of element"<<endl;
    // cin>>n;
    // vector<int>arr(n);
    // cout<<"enter the elements"<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // int uniqueElement=findUnique(arr);
    // cout<<uniqueElement;  
    // union
    // int arr[]={1,3,5,7,9};
    // int brr[]={2,4,6,8};
    // int sizea=5;
    // int sizeb=4;
    // vector<int> ans;
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);x
    // }
    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }.
    // intersection of 2 array
    // vector<int> arr{1,2,3,4,6,8};
    // vector<int> brr{3,4,10};
    // vector<int> ans;
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];
    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //             brr[j]=-1; //mark
    //             ans.push_back(element);
    //         }
    //     }
    // }
    // for (int i=0;i<ans.size();i++){
    //     cout<<ans[i];
    // }
    // pair sum

    int sum=80;
    vector<int> arr{10,20,30,40,60,70};
    for(int i=0;i<arr.size();i++)
    {
        // cout<<"we are at  "<<arr[i]<<endl;
        int element=arr[i];
        for(int j=i+1;j<arr.size();j++)
        {
            // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
            if(element + arr[j]==sum)
            {
                cout<<"pair found "<<element<<","<<arr[j]<<endl;
            }
        }
    }

    // triplet sum
    // int sum=60;
    //  vector<int> arr{10,20,30,40,60,70};
    //  for(int i=0;i<arr.size();i++){
    //    int element1=arr[i];
    //     for (int j=i+1;j<arr.size();j++){
    //        int element2=arr[j];
    //         for(int k=j+1;k<arr.size();k++){
    //            int element3=arr[k];
    //             if(element1+element2+element3==sum){
    //                 cout<<element1<<","<<element2<<","<<element3;
    //             }
    //         }
    //     }
    //  }
//    vector<int> arr{1,1,0,0,1,0,1,1,0,0,1,1,0,0,0,0,0,0,0};
//    int start=0;
//    int end=arr.size()-1;
//    int i=0;
//    while(i!= end)
//    {
//      if(arr[i]==0)
//     {
//         // swap(arr[start],arr[i]); not neccesary but imp for other question like this
//         start++;
//         i++;
//     }
//     else           // if(arr[i]==1)
//     {
//         swap(arr[i],arr[end]);
//         end--;
//     }
//    }
//    for(int i=0;i<arr.size();i++){
//     cout<<arr[i]<<" ";
//    }
//     return 0;
// }