#include <iostream>
using namespace std;

void quickSort(int *arr, int l, int r)
{
    // Base case.
    if(l >= r)
    {
        return;
    }

    int pivot = arr[r];

    int i = l, j = l;

    // Split the array.
    while(i < r)
    {
        if(arr[i] <= pivot)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        i++;
    }

    swap(arr[r], arr[j]);

    // Call quickSort on both halves.
    quickSort(arr, l, j - 1);

    quickSort(arr, j + 1, r);
}

int main()
{
    int arr[5] = {5 ,3 ,2 ,6 ,4};
    int n = 5;
    cout << "Before Sorting --> ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;
    quickSort(arr, 0, n - 1);

    cout << "After Sorting -->  ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}