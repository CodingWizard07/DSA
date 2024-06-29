#include <iostream>
using namespace std;
void rec_bubbleSort(int* arr, int n)
{
    // basecase
    if (n == 0 || n == 1)
    {
        return;
    }
    // processing
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    //rec relation
    rec_bubbleSort(arr, n - 1);
}
int main()
{
    int arr[5] = {2, 4, 7, 6, 1};
    int n = 5;
    rec_bubbleSort(arr,n);
    cout<<"Sorted array --> ";
    for (int i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }
}