#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rev_alt(int arr[], int n)
{
    int i = 0, j = 1;
    if (n / 2 == 0)
    {
        do
        {
            swap(arr[i], arr[j]);
            i = i + 2;
            j = j + 2;
        } while (i < j && i != n);
    }
    else
    {
        do
        {
            swap(arr[i], arr[j]);
            i = i + 2;
            j = j + 2;
        } while (i < j && j != n);
        
    }
}

int main()
{
    // cout<<"Enter no of elements of array :";
    // int n;
    // cin>>n;
    int arr[5] = {1, 2, 3, 4, 5};
    // int arr[6] = {1, 2, 3, 4, 5, 6};

    // int arr[n];
    // cout<<"Enter the array elements:";
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    // arrry contains even no. of elements;

    // cout << "before swapping, array is :";
    // printArray(arr, 6);
    // cout << "After swapping, array is :";
    // rev_alt(arr, 6);
    // printArray(arr,6);

    // arrry contains odd no. of elements;

    cout << "before swapping, array is :";
    printArray(arr, 5);
    cout << "After swapping, array is :";
    rev_alt(arr, 5);
    printArray(arr, 5);
}