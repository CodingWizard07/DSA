#include<iostream>
using namespace std;

class Health{

private:
    int health;
public:
    char level;

    int gethealth(){
        return health;
    }

    void sethealth(int a){
        health = a;
    }

    char getlevel(){
        return level;
    }

    void setlevel(char ch){
        level = ch;
    }

};

int main()
{
    //Static allocation
    Health h;
    h.sethealth(10);
    h.setlevel('a');
    cout<<"Health is : "<<h.gethealth()<<endl;
    cout<<"Level is : "<<h.getlevel()<<endl;

    //Dynamic Allocation
    Health *k = new Health;
    (*k).sethealth(20);
    (*k).setlevel('b');
    cout<<"Health is : "<<(*k).gethealth()<<endl;
    cout<<"Level is : "<<(*k).getlevel()<<endl;


    return 0;    
}