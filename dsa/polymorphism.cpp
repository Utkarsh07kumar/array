#include<iostream>
using namespace std;
// class maths{
//     public:
//     // polymorphism 1) same function is appear many time and have different funtionality therefore it is function oveloading
//     int sum(int a,int b){
//         return a+b;
//     }
//     int sum(int a,int b,int c){
//         return a-b-c;
//     }
//     int sum(int a,double b){
//         return a+b+10;
//     }
// };
// int main()
// {
//     maths obj;
//     cout<<obj.sum(5,7)<<endl<<obj.sum(5,7,8)<<endl<<obj.sum(5,7.3);
//     return 0;
// }
// operator overloading
// class param{
//     public:
//     int val;
//     void operator +(param& obj2){
//         int value1=this->val;
//         int value2=obj2.val;
//         cout<<(value2-value1)<<endl;
//     }
// };
// int main(){
//     param obj1,obj2;
//     obj1.val=7;
//     obj2.val=2;

//     obj1+obj2;
//     return 0;
// }
// function overiding
#include<iostream>
using namespace std;
class animal{
    public:
    virtual void speak(){
        cout<<"speaking"<<endl;       
    }
};
class dog:public animal{
    public:
    // function overiding if this is not here then for a obj of dog speaking will be printed
    void speak(){
        cout<<"barkin"<<endl;
    }
};
int main(){
    // animal a;
    // a.speak(); o/p-speaking
    // dog a;
    // a.speak();
    // animal* a=new animal();
    // a->speak();

    // dog* a=new dog();
    // a->speak();
    // upcasting
    // animal* a=new dog();    //pointer parent class ka hai object child class ka hai then parent call hoga but if we make parent function as virtual then child function will be called
    // a->speak();
    return 0;
}