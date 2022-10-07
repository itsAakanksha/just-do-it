#include <iostream>
using namespace std;

int main()
{

    int n;
    int arr[6] = {5, 3, 6, 1, 9, 8};
    n = sizeof(arr) / sizeof(arr[0]);
    int temp;
    int i = 1;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}