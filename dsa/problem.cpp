#include<iostream>
using namespace std;
float area(float r){
    return 3.14*r*r;
}
bool evenodd(int n){
    // if(n%2==0){
    //     return true;
    // }
    // return false;
    if((n&1)==0){
        return true;
    }
    return false;
}
int factorial(int n){
    int ans=1;
    for(int i=2;i<=n;i++){
        ans= ans*i;
    }
    return ans;
}
bool isprime(int n){
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printprime(int n){
    for(int i=1;i<n;i++){
        bool ans=isprime(i);
        if(ans){
            cout<<i<<" ";
        }
    }
}
int main()
{
    // float r;
    // cout<<"enter radius of circle"<<endl;
    // cin>>r;
    // float ans=area(r);
    // cout<<"area of circle is: "<<ans;
    int n;
    cin>>n;
    // int ans=evenodd(n);
    // if(ans){
    //     cout<<"even";
    // }
    // else
    // cout<<"odd";
    // int fac=factorial(n);
    // cout<<fac;
    // if(isprime(n)){
    //     cout<<"prime";
    // }
    // else
    // cout<<"not prime";
    printprime(n);

}