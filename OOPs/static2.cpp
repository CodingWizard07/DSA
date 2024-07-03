#include<iostream>
using namespace std;

class Example{
private:
    static int count;

public:
    Example(){
        // Increment the static count when an object is creat
        count++;
    }

    // Static member function to get the current value of count
    static int getcount(){
        return count;
    }

    //reset count value
    static int resetcount(){
        count = 0;
    }
};

//initialize static data member 
int Example::count = 0;

int main()
{
    Example a;
    Example b;
    Example c;

    cout<<"Number of objects created so far ->"<<Example::getcount()<<endl;

    Example::resetcount();
    cout<<"Count after reset ->"<<Example::getcount()<<endl;

    Example d;
    cout << "Number of objects created after reset: " << Example::getcount() << endl;
 
    return 0;
}