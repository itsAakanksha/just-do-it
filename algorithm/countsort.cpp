#include <iostream> 
using namespace std;

// i have made this by myself and its time complexity is o(n*2);
int main(){
    int arr[17] = {2,1,1,0,2,5,4,0,2,8,7,7,9,2,0,1,9};
    int count[10] = {0}; // range of count is maximum value +1 in arr
        
    int index =0;

    for(int i=0;i<17;i++){
        count[arr[i]] ++;
    }

// k is denoting index of arr[] and j is denoting index of count[]
    for(int k=0;k<10;k++) 
    {
        for(int j=0;j<count[k];j++)
        {
            arr[index] = k;
            index ++;
        }
    }         

    for( int i=0;i<17;i++){
      cout<<arr[i]<< " ";
    }
   




}