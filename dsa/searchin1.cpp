#include<iostream>
#include<vector>
using namespace std;
int findpivot(vector<int> arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while
}
int main(){
    vector<int> arr{3,4,5,6,7,1,2};
    int ans=findpivot(arr);
    cout<<"pivot is"<<ans<<endl;
    return 0;
}