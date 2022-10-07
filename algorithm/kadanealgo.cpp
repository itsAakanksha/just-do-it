#include <iostream>

using namespace std;

// 02 september 2022
// write a program using kadane's algorithm




int maxSubarraySum(int arr[], int size)
{
    int current_sum = 0, max_so_far = 0;
    for (int i = 0; i < size; i++) {
        

        if (arr[i] <= current_sum + arr[i]) {
            current_sum += arr[i];
        }

        else {
            current_sum = arr[i];
        }
        if (current_sum > max_so_far){

            max_so_far = current_sum;

        }
    }
    return max_so_far;
} 

int main(){
    int arr[5] = {-2,3,-4,1,3};
    int max= maxSubarraySum(arr,5);
    cout<<max;
}
