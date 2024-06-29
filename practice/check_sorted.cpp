#include <iostream>
using namespace std;

bool check_sorted(int *arr, int n)
{
    // base case
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool rem = check_sorted(arr+1, n - 1);
        return rem;
    }
}

int main()
{
    int arr[] = {1, 2, 2, 1, 4};

    if (check_sorted(arr, 5))
    {
        cout << "Sorted array" << endl;
    }
    else
    {
        cout << "Not Sorted array" << endl;
    }

    return 0;
}