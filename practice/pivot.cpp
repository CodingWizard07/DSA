#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int even[4] = {4,8,9,2};

    cout << "Pivot index :  " << getPivot(even, 4) << endl;
}