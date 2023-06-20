#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int m,n;
    cin>>n>>m;
    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];       
    }
    sort(a.begin(),a.end());
    vector <int> ans;
    int dt=0,wt=0,t=0;   
    for(int i=1;i<n;i++)
    {
        if(a[i-1]+a[i]<=m){
            dt+=a[i];
        }else
        {
            dt+=a[i];
            wt+=1;
        }        
    }
    if(a[0] + a[1]<25){
    t=dt+wt+a[0];
    }
    else{
        t=dt+wt+a[0]+1;
    }
        cout<<t;
    return 0;
}