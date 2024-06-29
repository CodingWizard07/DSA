#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    // determining the length of two strings
    int len1 = mid + 1 - s;
    int len2 = e - mid;

    // creating two arrays with the lengths obtained
    int *first = new int[len1];
    int *second = new int[len2];

    // copying the values into the 2 arrays from the original array
    int k;
    k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int j = 0; j < len2; j++)
    {
        second[j] = arr[k++];
    }

    // place the values into the original by sorting and merging the 2 arrays
    int i = 0;
    int j = 0;
    k = s;
    while (i < len1 && j < len2)
    {
        if (first[i] < second[j])
        {
            arr[k++] = first[i++];
        }
        else
        {
            arr[k++] = second[j++];
        }
    }

    while (i < len1)
    {
        arr[k++] = first[i++];
    }

    while (j < len2)
    {
        arr[k++] = second[j++];
    }
    delete []first;
    delete []second;
}

void mergeSort(int *arr, int s, int e)
{
    // basecase
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // sorting left part
    mergeSort(arr, s, mid);

    // sorting right part
    mergeSort(arr, mid + 1, e);

    // merging the 2 sorted arrays
    merge(arr, s, e);
}

int main()
{
    int arr[5] = {2, 1, 5, 3, 4};
    int n = 5;
    cout<<"Before Sorting --> ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    cout<<endl;
    mergeSort(arr, 0, n - 1);

    cout<<"After Sorting -->  ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
        return 0;
}