#include<iostream>
using namespace std;
int partition (int arr[],int s,int e)
{
    // step1 choose pivot
    int pivotindex=s;
    int pivotelement=arr[s];

    // find right position for pivot
    int count=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotelement)
        {
            count++;
        }
    }
    int correctindex=s+count;
    swap(arr[pivotindex],arr[correctindex]);
    pivotindex=correctindex;

    // step 3 left chote right bade
    int i=s;
    int j=e;
    while (i<pivotindex && j>pivotindex)
    {
        while (arr[i]<=pivotelement)
        {
            i++;
        }
        while (arr[j]>pivotelement)
        {
            j--;
        }
        if(i<correctindex && j>correctindex)
        {
            swap(arr[i],arr[j]);
        }
        
    }
    return correctindex;
    
    
}
void quicksort(int arr[],int s,int e)
{
    if(s>=e) return;
    
    // partiton logic
    int p=partition(arr,s,e);

    // recursion
    
    // leftcall
    quicksort(arr,s,p-1);

    // rightcall
    quicksort(arr,p+1,e);
}
int main(){
    int arr[]={8,1,3,4,20,50,30};
    int n=7;
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}