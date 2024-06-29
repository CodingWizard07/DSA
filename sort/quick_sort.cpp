#include <iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    // checking the correct position of pivot
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }

    // placing the pivot in correct posititon
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // checking the right and left part
    int i = s;
    int j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= arr[pivotIndex])
            i++;

        while (arr[j] > arr[pivotIndex])
            j--;

        //if (arr[i] > arr[pivotIndex] && arr[j] < arr[pivotIndex]){
        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
    // basecase
    if (s >= e)
    {
        return ;
    }
    // partiton
    int p = partition(arr, s, e);
    // recursion relation
    quickSort(arr, s, p-1);
    quickSort(arr, p+1, e);
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