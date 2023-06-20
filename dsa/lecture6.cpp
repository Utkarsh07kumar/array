#include <bits/stdc++.h>
using namespace std;
void printName()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"utk"<<endl;
    }
}
void printNum(int a)
{
    cout<<a;
}
int getSum(int a,int b){
    // int result=a+b;
    // return result;
    return a+b;
}
int findMax(int num1,int num2,int num3){
    if(num1>num2 && num1>num3)
    {
        return num1;
    }
    else if(num2>num1 && num2>num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }

}

char getGrade(int marks){
    switch(marks/10){
        case 10:
        case 9:return 'A';
        break;
        case 8:return 'B';
        break;
        case 7:return 'C';
        break;
        case 6:return 'D';
        break;
        default:return 'E';
    }
}
int getSum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;

}
int getEvenSum(int n){
    int sum=0;
    for(int i=2;i<=n;i+=2){
        sum=sum+i;
    }
    return sum;
}
void circle (int r)
{
    float a=3.14*r*r;
    cout<<a;
}
bool evenOdd(int n){
    if(n%2==0)
        return true;
    else
        return false;   
}
int factorial(int n){
    int res=1;
    for(int i=n;i>0;i--){
        res=res*i;
    }
    return res;
}
bool prime(int n){
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
bool printprime(int n){
    if(n==1 || n==0)
    return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}
void printdigit(int n)
{
    
    while(n!=0)
    {
        int a=n%10;
        cout<<a<<endl;
        n=n/10;
    }
}
int main()
{
    //  printName();
    //  return -1;
    // ***************************************************
    //  int a =5; 
    //  cout<<" address of a is "<<&a<<endl;
    //  printNum(a);
    // ***************************************************
    // int a;
    // cout<<"enter the value of a"<<endl;
    // cin>>a;
    // int b=7;
    // cout<<"enter the value of b"<<endl;
    // cin>>b;
    // int sum=getSum(a,b);
    // cout<<"addition of two number is "<<sum<<endl;
    // ***************************************************
    // int a,b,c;
    // cout<<"enter a"<<endl;
    // cin>>a;
    // cout<<"enter b"<<endl;
    // cin>>b;
    // cout<<"enter c"<<endl;
    // cin>>c;
    // int maximumNumber=findMax(a,b,c);
    // cout<<maximumNumber<<endl;
    // ****************************************************
    // int marks;
    // cout<<"enter the marks"<<endl;
    // cin>>marks;
    // char result=getGrade(marks);
    // cout<<result;
    // ****************************************************
    // int n;
    // cout<<"enter n"<<endl;
    // cin>>n;
    // int result=getSum(n);
    // cout<<result;
    // *****************************************************
    // int n;
    // cout<<"enter n"<<endl;
    // cin>>n;
    // int result=getEvenSum(n);
    // cout<<result;
    // *****************************************************
    // int r;
    // cout<<"enter the radius of circle"<<endl;
    // cin>>r;
    // circle(r);
    // *****************************************************
    //   int n;
    //   cout<<"enter any number"<<endl;
    //   cin>>n;
    //   evenOdd(n)?cout<<"even":cout<<"odd";
    // *********************************************************
    // int n;
    // cout<<"enter number"<<endl;
    // cin>>n;
    // int result=factorial(n);
    // cout<<result;
    // *********************************************************
    // int n;
    // cout<<"enter any number"<<endl;
    // cin>>n;
    // prime(n)?cout<<"yes":cout<<"no";
    // **********************************************************
    // int n;
    // cout<<"enter any number"<<endl;
    // cin>>n;
    // for(int i=1;i<=n;i++)
    // {
    //     if(printprime(i))
    //     cout<<i <<" ";
    // }
    // **********************************************************
    // int n;
    // cout<<"enter a number"<<endl;
    // cin>>n;
    // printdigit(n);
}