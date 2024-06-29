#include<iostream>
using namespace std;

class Stack{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr=new int(size);
        top=-1;
    }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
            cout << "Success!! Pushed element "<<element<< endl;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

};

int main()
{
    Stack s(3);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);

}