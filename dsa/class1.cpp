#include<iostream>
using namespace std;
class animal
{
    // // encapsulation 
    // private:            //perfect encapsulation/full encapsulation
    //     int age;
    //     int weight;
    // public:
    //     void eat(){
    //         cout<<"eating"<<endl;
    //     }
    //     int getage(){
    //         return this->age;
    //     }
    //     void setage(int age){
    //         this->age=age;
    //     }
// ***************************************************
    // inheritance
    public:
        int age;
        int weight;
        void eat(){
            cout<<"eating"<<endl;
        }
};
class dog:public animal
{
        
};
int main()
{
    animal dog;
    dog.eat();

}