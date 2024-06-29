#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    int minindex;
    for (int i = 0; i < n; i++)
    {
        minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        swap(arr[i], arr[minindex]);
    }
}
int main()
{
    int arr[5] = {3, 4, 5, 1, 2};
    selectionSort(arr, 5);
    cout << "Sorted array --> ";
    for (int i = 0; i < 5; i++)
    {
        cout <<" "<< arr[i];
    }
}