#include<iostream>
using namespace std;

int main()
{
    int value = 5;
    int *ptr = &value;
    int **ptr1 = &ptr;
    cout<<"OK"<<endl;
    // printing address
    /*cout<<"Printing value address: "<< ptr<<endl;
    cout<<"Printing value address: "<< &ptr<<endl;
    cout<<"Printing value address: "<< *ptr1<<endl;
    */

    cout<<"printing value in 3 ways-->"<<endl;
    cout<<value<<endl;
    cout<<*ptr<<endl; 
    cout<<**ptr1<<endl; 

    cout<<"Print the address of the value"<<endl;
    //1st way
    cout<<&value<<endl;
    cout<<*(&ptr)<<endl;
    cout<<**(&ptr1)<<endl;
    //2nd way
    cout<<&value<<endl;
    cout<<ptr<<endl;
    cout<<*ptr1<<endl;
}