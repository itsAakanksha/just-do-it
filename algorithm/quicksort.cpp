#include <iostream> 
using namespace std;


int partition(int arr[], int lb, int ub)
{
    // int temp,mtemp;
    int i = lb;
    int pivot = arr[lb];
    int j = ub;

    while (i < j)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
         if(i<j){

         swap(arr[i],arr[j]);
         }

    }
    swap(arr[lb],arr[j]);

    
    return j;
}

void qsort(int arr[],int lb,int ub){
int loc;
    if(lb<ub){

    loc = partition(arr, lb, ub);
    qsort(arr,lb,loc-1);
    qsort(arr,loc+1,ub);
    }
    
}

int main()
{
    int lb = 0;
    int ub = 7;
    int arr[8] = {6, 9, 4, 8, 23, 4, 2, 9};

    qsort(arr,lb,ub);

    for(int k = 0;k<8;k++){
        cout<<arr[k]<<" ";
    }
}

