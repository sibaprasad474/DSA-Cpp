#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;
int BubbleSort(int arr[],int size){
   for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]>=arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
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
    cout<<"hold on ... we're sorting .."<<endl;
    BubbleSort(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    return 0;
}