#include<iostream>
using namespace std;
class animal{
private:
int weight;
public:
    // int age;        //space 4
    // int weight;    //space 4
    // char ch;       //what is padding and greedy alingment and why char get 4byte space
    
    // *****************************************
    // state or properties
    int age;
    string name;
    // default constructor
    animal(){
        this->age=0;
        cout<<endl<<"constructor called"<<endl;
    }
    // parametrized constructor
    animal(int age){
        cout<<"parametrized constructor called"<<endl;
    }
    // copy constructor
    animal(animal &obj){
        this->age=obj.age;
        cout<<"copy constructor"<<endl;
    }
    // behaviour and function
    void eat()
    {
        cout<<"eating"<<endl;
    }
    void sleep()
    {
        cout<<"sleeping"<<endl;
    }
    int getweight(){
        return weight;
    }
    void setweight(int weight){
        // this is pointer to current object i.e weight at line 5
        this->weight=weight;
    }
};
int main(){
    // cout<<"size of empty class is "<<sizeof(animal)<<endl;
    // ***********************************************
    // object creation
    // 1) static memory allocation
    animal ramesh;
    ramesh.age=12;
    ramesh.name="lion";
    // how to access obejct property --> using dot operator
    cout<<"age of ramesh is :"<<ramesh.age<<endl;
    cout<<"name of ramesh is :"<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.sleep();
    // to access private member we use getter ans setter
    ramesh.setweight(104);
    cout<<"weight of ramesh is :"<<ramesh.getweight()<<endl;

    // 2) dynamic memory allocation
    cout<<endl<<endl;
    animal* suresh = new animal(100);    //caliing parametrized constructor
    (*suresh).age=15;
    (*suresh).name="billi";
    // alternative
    suresh->age=17;
    suresh->name="baby";
    cout<<"age of suresh is :"<<suresh->age<<endl;
    cout<<"age of suresh is :"<<suresh->age<<endl;
    suresh->eat();
    suresh->sleep();
    // obj copy
    animal a;
    animal b=a;       //copy constructor
    animal c(b);      //copy constructor
    return 0;
}