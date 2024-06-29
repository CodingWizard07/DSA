#include<iostream>
using namespace std;

bool findElement(int *arr,int size,int key){
    //basecase
    if(size == 0){
        return false;
    }

    if(size == 1 && arr[0]==key){
        return true;
    }

    //processing
    if(key == arr[0])
    return true;

    bool r = findElement(arr+1,size-1,key);
    return r;
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int size=5;

    int result = findElement(arr,size,8);

    if(result){
        cout<<"Value found !!"<<endl;
    }   
    else{
        cout<<"Value not found !!"<<endl;
    }
}