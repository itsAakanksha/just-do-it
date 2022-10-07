#include<iostream>
using namespace std;
// program for bubble sort

int main()
{
    
 int arr[5] = {3,5,2,6,4};

 for(int n=0;n<5;n++){
    for(int i =0;i<5;i++){
        if(arr[i]>arr[i+1]){

        swap(arr[i],arr[i+1]);
        }
    }
 }

 for(int j=0;j<5;j++){
    cout<<arr[j]<<endl;
 }

}