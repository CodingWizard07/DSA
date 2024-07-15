#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int qfront;
    int qrear;

    // constructor
    Queue()
    {
        arr = new int[size];
        qfront = 0;
        qrear = 0;
    }

    void enqueue(int element)
    {
        if (qrear == size)
        {
            cout << "Queue is Full" << endl;
        }

        else
        {
            arr[qrear] = element;
            cout<<"Pushed value -> "<<element<<endl;
            qrear++;
        }
    }

    int dequeue()
    {
        if (qfront == qrear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;

            if (qfront == qrear)
            {
                qfront = 0;
                qrear = 0;
            }
            return ans;
        }
    }

    int front()
    {
        if(qfront == qrear){
          return -1;
        }
        else{
            return arr[qfront];
        }
    }

    bool isEmpty()
    {
        if(qfront == qrear){
          return true;
        }
        else{
            return false;
        }
    }
};
int main()
{
    Queue q;
    cout << "Enter the size of the Queue _> ";
    cin >> q.size;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<"Deleted value -> "<<q.dequeue()<<endl;
    cout<<"Top element-> "<<q.front()<<endl;
    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"There is space.LOL"<<endl;
    }
    return 0;
}