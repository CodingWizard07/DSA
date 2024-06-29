
#include <iostream>
using namespace std;

void find_unique(int arr[], int store[], int n)
{
    int k = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                continue;
            }
            else
            {
               store[k]=arr[i];
            }
        }
    }
    cout<<"No.of unique element present are : "<<count;
     if(count>0){
        cout<<"Unique elements are :";
         for (int k = 0; k < 6; k++)
    {
        cout << store[k] << " ";
    }
    cout << endl;
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
    int store[6];
    int arr[6] = {2, 2, 1, 3, 3, 4};
    cout << "Given array : ";
    printArray(arr, 6);

    find_unique(arr,store,6);
    
   
}
