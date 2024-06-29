
#include <iostream>
using namespace std;

void find_duplicate(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i <n ; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
            else
            {
                continue;
            }
        }
        if (arr[i] != arr[i-1])
        {
            cout << "Element " << arr[i] << " has " << count << " duplicate(s) " << endl;
        }
        count = 0;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {1, 2, 2, 3, 4};
    cout << "Given array : ";
    printArray(arr, 5);

    find_duplicate(arr, 5);
}
