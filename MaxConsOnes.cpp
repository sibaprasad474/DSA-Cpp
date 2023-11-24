#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;
int MaxConsOnes(int arr[],int size){
    int curr=0;
    int maxi=0;
    for(int i=0;i<size;i++){
       if(arr[i]==1){
        curr++;
        maxi=max(curr,maxi);
       }
       else{
        curr=0;
       }
    }
    return maxi;
    
}
int main(){
    int size;
    cout<<"enter no of elements you want :"<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the array elements 0's and 1's "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"printing the max consequetive ones . please wait ...."<<endl;
    int maxOne=MaxConsOnes(arr,size);
    cout<<"no of max consequtive ones : "<<maxOne<<endl;
    return 0;
}