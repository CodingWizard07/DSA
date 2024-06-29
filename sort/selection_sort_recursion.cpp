#include <iostream>
using namespace std;
void rec_selectionSort(int* arr, int n, int i)
{
    // basecase
    if(n==0 || n==1)
    return ;

    if(i>=n)
    return ;

    //processing
    int minindex;
        minindex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        swap(arr[i], arr[minindex]);
    
    //recursion relation
    rec_selectionSort(arr+1,n-1,i);
    }


int main()
{
    int arr[6] = {7,6,6,9,2,1};
    int n=6;
    rec_selectionSort(arr,n,0);
    cout << "Sorted array --> ";
    for (int i = 0; i < n; i++)
    {
        cout <<" "<< arr[i];
    }
}