#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 3, 5};
    // cout << "Address at 1st index -->" << arr << endl;
    // cout << "Address at 1st index -->" << &arr[0] << endl;
    // cout << "Element at 1st index -->" << arr[0] << endl;
    // cout << "Element at 1st index -->" << *arr << endl;
    // cout << *(arr + 1) << endl;
    // cout << *(arr) + 1 << endl;
    // cout << 2[arr] << endl;

    // int temp[10];
    // cout<<"Size of the array --> "<<sizeof(temp)<<endl;
    // int *ptr = &temp[0];
    // cout<<"Size of the pointer --> "<<sizeof(ptr)<<endl;
    // cout<<"Size of the pointer --> "<<sizeof(*ptr)<<endl;
    // int* ptr;
    // cout << "Size of pointer: " << sizeof(ptr) << endl;

    int *ptr = &arr[0];
    cout << *ptr <<endl;
}