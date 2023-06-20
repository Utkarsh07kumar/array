#include<iostream>
using namespace std;
int divide(int dividend, int divisor) 
{
    int start=0;
    int end=abs(dividend);
    int quotient=0;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(abs(divisor*mid)==abs(dividend)) 
        {
            quotient= mid; 
            break;
        }
        if(abs(divisor*mid)>abs(dividend)) end=mid-1;
        else 
        {
            quotient=mid;
            start=mid+1;
        }
        int mid=start+(end-start)/2;
    }
    if((dividend>0 && divisor>0) || (dividend<0 && divisor<0)) return quotient;
    else return -quotient;
}
int main(){
    int dividend;
    cin>>dividend;
    int divisor;
    cin>>divisor;
    int ans=divide(dividend,divisor);
    cout<<ans;
    return 0;
}