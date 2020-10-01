#include <iostream>
using namespace std;

void insert (int arr[],int n ,int target , int position){

   int count =0;
   //over-write elements present after this position 
   for(int i=n+1;count<(n+1)-position;i--){
       count++;
       arr[i]=arr[i-1];
  }
  
    //insert element here
    arr[position]=target;

    for(int i=0;i<n+1;i++){
        cout<<arr[i];
    }
   

}

int main() 
    
    int arr [100];

    //user entered number of elements 
    int n ;
    cin >>n;

    //filled array with given input
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //ask number to be iserted 
    int target;
    cin>>target;

    //where to be inserted
    int position;
    cin>>position;

    //insert taget at given location 
    insert(arr,n,target,position);





}
