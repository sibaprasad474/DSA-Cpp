#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;
int Linearsearch(int arr[],int size,int key){
    int index;
   for(int i=0;i<size;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
   }
   return index;
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
    cout<<"enter the element to find"<<endl;
    int key;
    cin>>key;
    cout<<"hold on ! searching in progress .."<<endl;
    int position;
    position=Linearsearch(arr,size,key);
    cout<<"element found at "<<position<<"th index"<<endl;
    return 0;
}