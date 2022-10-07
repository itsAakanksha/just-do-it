#include <iostream>
using namespace std;


void merge(int arr[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = arr[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = arr[mid + 1 + j];    
      
    i = 0, /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = beg;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            arr[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            arr[k] = RightArray[j];    
            j++;    
        }    
        k++;    
         }    
    while (i<n1)    
    {    
        arr[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        arr[k] = RightArray[j];    
        j++;    
        k++;    
    }    


}    


void printArray(int arr[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
    printf("\n");  
}  



// void merge(int arr[], int lb, int mid, int ub)
// {

//     int i = lb;
//     int j = mid + 1;
//     int k = lb;
//     int b[10];

//     while (i <= mid && j <= ub)
//     {
//         if (arr[i] <= arr[j])
//         {
//             b[k] = arr[i];
//             i++;
//         }
//         else
//         {
//             b[k] = arr[j];
//             j++;
//         }

//         k++;
//     }
//     if(i>mid){
//         while(j<=ub){
//             b[k] = arr[j];
//             j++;k++;
//         }
//     }
//     if(j>=ub){
//         while(j<=ub){
//             b[k] = arr[i];
//             i++;k++;
//         }
//     }


//     for(int l =0;l<10;l++){
//         arr[l] = b[l] ;
//     }


// }

void mergesort(int arr[], int lb, int ub)
{
   if(lb<ub){
    int mid = lb + ub / 2;
    mergesort(arr, lb, mid);
    mergesort(arr, mid + 1, ub);
    merge(arr,lb, mid, ub);
   }

}

int main()
{
    int arr[10] = {4,2,1,8,4,10,5,7,6,11};

      mergesort(arr,0,10);

   printArray(arr, 10);



}
