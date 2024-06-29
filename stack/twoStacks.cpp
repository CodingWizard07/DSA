#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int s)
    {
        this->size = s;
        arr = new int(s);
        top1 = -1;
        top2 = s;
    }

    // push from left to right
    void push1(int num)
    {
        if ((top2 - top1) > 1)
        {
            top1++;
            arr[top1] = num;
            cout<<"Pushed "<<num<<endl;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    // push from right to left
    void push2(int num)
    {
        if ((top2 - top1) > 1)
        {
            top2--;
            arr[top2] = num;
            cout<<"Pushed "<<num<<endl;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop1()
    {
        if (top1 >= 0)
        {
            int ans1 = arr[top1];
            top1--;
            cout<<"Popped "<<ans1<<endl;
            return ans1;
        }
        else
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }

    int pop2()
    {
        if (top2 < size)
        {
            int ans2 = arr[top2];
            top2++;
            cout<<"Popped "<<ans2<<endl;
            return ans2;
        }
        else
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
    }
    
};
int main()
{
    Stack st(4);
    st.push1(2);
    st.push2(3);
    st.push2(4);
    st.push2(5);
    st.push1(6);
    st.pop1();
    st.pop1();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    return 0;
}