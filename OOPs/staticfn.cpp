#include<iostream>
using namespace std;

class Sample
{
public:
    static int levels;

    Sample()
    {
        cout<<"Calling Default Constructor .."<<endl;
    } 
    //Static Function : can access Static function only
    static int gamelevels(){
        return levels;
    }

};

int Sample :: levels = 5;

int main()
{
    //Static keyword belongs to class , so can be called using class.
    cout<<"Number of levels : "<<Sample::levels<<endl;

    
    cout<<"Number of levels : "<<Sample::gamelevels()<<endl;
    return 0;
}