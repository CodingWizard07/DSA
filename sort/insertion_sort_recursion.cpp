#include <iostream>
using namespace std;

void recursive_insertionSort(int arr[], int n,int i)
{
    //basecase
    if(i >= n){
        return ;
    }
    //processing
    int temp=arr[i];
    int j = i-1;

    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        --j;
    }
    arr[j+1]=temp;

    //rr
    recursive_insertionSort(arr, n, i+1);
}

int main()
{
    int arr[7] = {10, 1, 7, 4, 8, 2, 11};
    int n=7;
    recursive_insertionSort(arr, n, 1);
    cout << "Sorted array -->";
    for (int i = 0; i < 7; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    return 0;
}
