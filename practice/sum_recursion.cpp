#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{
    // basecase
    if (n == 0)
        return 0;

    // processing
    int sum = arr[0];
    // recursion relatiion

    int result = getSum(arr + 1, n - 1);
    return sum + result;
}
int main()
{
    int n = 5;
    int arr[5] = {3, 2, 5, 1, 6};
    int r = getSum(arr, n);
    cout << "Sum : " << r << endl;
}