#include<iostream>
#include<vector>
using namespace std;

// visiting method
// void findmissing(int *a,int n){
//     for(int  i=0;i<n;i++){
//         int index=abs(a[i]);
//         if(a[index-1]>0){
//             a[index-1]*=-1;
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]>0){
//             cout<<i+1<<" ";
//         }
//     }

// }
// void findmissing(int *a,int n){
//     int i=0;
//     while (i<n)
//     {
//         int index=a[i]-1;
//         if(a[i]!=a[index]) swap(a[i],a[index]);
//         else ++i;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]!=i+1) cout<<i+1<<" ";
//     }
// }
// int main(){
//     int a[]={1,4,3,5,5};
//     int n;
//     n=sizeof(a)/sizeof(int);
//     findmissing(a,n);
//     return 0;
// }

// wave print matrix

void waveprint(vector<vector<int>> v){
    int m=v.size();
    int n=v[0].size();
    for(int startcol=0;startcol<n;startcol++)
    {
        if((startcol &1)==0)
        {
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else
        {
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }

        }
    }
}
int main(){
    vector<vector<int>> v{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    waveprint(v);
    return 0;
}