#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            --j; // Optimized loop termination condition
        }
        arr[j+1] = temp;
    }
}

int main()
{
    int even[7] = {10, 1, 7, 4, 8, 2, 11};
    insertionSort(even, 7);
    cout << "Sorted array -->";
    for (int i = 0; i < 7; i++)
    {
        cout << " " << even[i];
    }
    cout << endl;

    return 0;
}
