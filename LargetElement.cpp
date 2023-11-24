#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;
int MaxElement(int arr[],int size){
    int maxEl=arr[0];
    for(int i=0;i<size;i++){
       if(arr[i]>=maxEl){
       maxEl=arr[i];
       }
    }
    return maxEl;
    
}
int main(){
    int size;
    cout<<"enter no of elements you want :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the array elements : "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"finding the largest element. please wait ...."<<endl;
    int maxEl=MaxElement(arr,size);
    cout<<"max element of the array: "<<maxEl<<endl;
    return 0;
}