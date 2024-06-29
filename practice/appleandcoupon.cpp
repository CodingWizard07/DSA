#include <iostream>
#include <algorithm> 
#include <vector> 
using namespace std;

long long appleAndCoupon(int n, int m, vector<int>& arr)
{
    int toPay=0;
    for(int i=0;i<n;i++){
        toPay+=arr[i];
    }

    sort(arr.begin(),arr.end());

    toPay-=arr[n-m];

return toPay;
}
int main()
{
    int e[7] = {10 ,34 , 12 ,14 ,54 ,12 ,15 };
    vector<int> eVector(e, e + 7);
    cout << "Total amount to pay --> " <<appleAndCoupon(7,4,eVector)<< endl;
}

 