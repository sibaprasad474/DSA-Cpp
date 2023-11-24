#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> movezeros(vector<int>arr){
   vector<int> temp;
   //copied the non-zero elements into the temporary vector
   for (int i = 0; i < arr.size(); i++)
   {
        if(arr[i]!=0){
            int x;
            x=arr[i];
            temp.push_back(x);
        }
   }
   for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
   }
   for (int i = temp.size(); i < arr.size(); i++)
   {
    arr[i]=0;
   }
   
   return arr; 
}
int main(){
int size;
    vector<int> arr;
    cout<<"enter the no of elements you want to push :"<<endl;
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    arr=movezeros(arr);
    cout<<"printing . hold on.. "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}