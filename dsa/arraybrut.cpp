#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr{1,2,3,4};
    vector<int> brr{5,3,4,6,7,8};
    vector<int> crr;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT16_MAX;
                // arr[i]=INT16_MAX;
            }
        }
    }
    for(int i=0;i<arr.size();i++){
          crr.push_back(arr[i]);
    }
    for(int i=0;i<brr.size();i++){
        if(brr[i]!=INT16_MAX) crr.push_back(brr[i]);
    }
    for(int i=0;i<crr.size();i++){
        cout<<crr[i];
    }
    
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<brr.size();j++){
    //         if(arr[i]==brr[j]){
    //             brr[j]=INT16_MAX;
    //             crr.push_back(arr[i]);
    //         }
    //     }
    // }
    // for(int i=0;i<crr.size();i++){
    //     cout<<crr[i]<<" ";
    // }
    return 0;
}