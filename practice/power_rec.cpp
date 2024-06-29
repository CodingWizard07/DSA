#include<iostream>
using namespace std;

int checkPower(int a,int b){
    //basecase
    if(b==0){
        return 1;
    }

    //processing and recursion
    return a*checkPower(a,b-1);
}
int main()
{
    int a,b;
    cout<<"Enter the values of a and b : "<<endl;
    cin>>a;
    cin>>b;

    int  power = checkPower(a,b);
    cout<<"Value : "<<power<<endl;
}