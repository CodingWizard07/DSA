#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int even[10] = {10, 4, 7, 6, 20, 9, 11, 13 ,12 ,3};
    bubbleSort(even, 10);
    cout << "Sorted array -->";
    for (int i = 0; i < 10; i++)
    {
        cout << " " << even[i];
    }
}