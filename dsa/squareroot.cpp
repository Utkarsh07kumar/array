#include<iostream>
using namespace std;
int findsqrt(int n)
{
    int s=0;
    int e=n-1;
    int m=s+(e-s)/2;
    int ans;
    while(s<=e){
        if(m*m==n) return m;
        if(m*m>n) e=m-1;
        else{
            ans=m;
            s=m+1;    
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=findsqrt(n);
    cout<<"ans is "<< ans<<endl;
    int precision;
    double ans1;
    cout<<"enter the number of floating digit"<<endl;
    cin>>precision;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=ans;j*j<=n;j+=step){
            ans1=j;
        }
        step/=10;
    }
    cout<<"correct ans is "<<ans1<<endl;
    return 0;
}