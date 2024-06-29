#include<iostream>
using namespace std;

int getPivot(int arr[], int n) {
  int s = 0;
  int e = n - 1;
  int mid = s + (e - s) / 2;

  while (s < e) {
    if (arr[mid] >= arr[0]) {
      s = mid + 1;
    } else {
      e = mid;
    }
    mid = s + (e - s) / 2;
  }
  return s;
}

int binarySearch(int arr[], int start, int end, int key) {
  int s = start;
  int e = end;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (arr[mid] == key) {
      return mid;
    } else if (arr[mid] < key) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
    mid = s + (e - s) / 2;
  }
  return -1;
}

int search(int arr[], int n, int k){
  int pivot = getPivot(arr, n);
  if (k >= arr[pivot] && k < arr[n - 1]) {
    return binarySearch(arr, pivot, n - 1, k);
  }
   else if(k < arr[pivot] && k >= arr[0])  {
    return binarySearch(arr, 0, pivot-1, k);
  }
}

int main()
{
     int even[4] = {4 ,8 ,9, 2};

     cout << "Element is at index " << search(even, 4, 2) << endl;
}