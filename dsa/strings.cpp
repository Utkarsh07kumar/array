#include<iostream>
#include<string.h>
using namespace std;
int getlength(char name[]){
    int length=0;
    int i=0;
    while(name[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int reverseArray(char name[]){
    int i=0;
    int n=getlength(name);
    int j=n-1;
    while(i<=j)
    {
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
void  replacespaces(char sentance[100]){
    int i=0;
    int n=strlen(sentance);
    for(int i=0;i<n;i++){
        if(sentance[i] ==' '){
            sentance[i]='@';
        }
    }
}
bool pallindrome(char word[]){
    int i=0;
    int n=strlen(word);
    int j=n-1;
    while(i<=j){
        if(word[i]!=word[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }return true;
}

int main(){
    // char ch[100];
    // ************************************************
    // entire string as an intput
    // cout<<"name"<<endl;
    // cin>>ch;
    // cout<<"your name is "<<ch<<endl;
    // ************************************************
    // single character as an input
    // ch[0]='a';
    // ch[1]='b';
    // cin>>ch[2];
    // cout<<ch[0]<<ch[1]<<ch[2];
    // ************************************************
    // last character stores null character
    // char name[100];
    // cin>>name;
    // for(int i=0;i<8;i++)
    // {
    //     cout<<"indez: "<<i<<" value: "<<name[i]<<endl;
    // } 
    // int value=(int)name[7];
    // cout<<value;  
    // ****************************************************
    // character after space will not be printed
    // cin>>ch;               not read space value
    // cin.getline(ch,50);       //read values after space
    // cin.getline(ch,50,#)
    // cout<<ch;
    //  ***************************************************
    // length of string
    // char name[100];
    // cin.getline(name,50);
    // cout<<"lenght : "<<getlength(name)<<endl;
    // cout<<"length :"<<strlen(name)<<endl;
    // //  reverse a string
    // cout<<"initally: "<<name<<endl;
    // reverseArray(name);
    // cout<<"finally: "<<name<<endl;
    // ************************************************88
    // char sentance[100];
    // cin.getline(sentance,100);
    // cout<<sentance<<endl;
    // replacespaces(sentance);
    // cout<<"edited sentace:"<<endl<<sentance;
    // ***************************************************
    // char word[100];
    // cin.getline(word,50);
    // cout<<pallindrome(word);
   
    // ****************************************************
    string str,str1;
    cin>>str;
    getline(cin,str1);
    cout<<str<<str1;
    return 0;
}