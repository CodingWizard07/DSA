#include<iostream>
#include<string.h>
using namespace std;

class Shallowcopy{

private:
    int health;
    char level;
public:
    
    char *name;
    Shallowcopy(){
        cout<<"Calling Simple constructor..."<<endl;
        //Shallowcopy : Dynamically allocating from Heap, copied object will point to same memory location
        name = new char[100];
    }


    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int a){
        health = a;
    }

    void setlevel(char ch){
        level = ch;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<<"[ "<<"Name : "<<this->name<<" ,";
        cout<<"Health : "<<this->health<<" ,";
        cout<<"Level : "<<this->level<<" ]";
        cout<<endl;
    }
    
};


class Deepcopy{

private:
    int health;
    char level;
public:
    
    char *name;
    Deepcopy(){
        cout<<"Calling Simple constructor..."<<endl;
        name = new char[100];
    }


    int gethealth(){
        return health;
    }

    char getlevel(){
        return level;
    }

    void sethealth(int h){
        health = h;
    }

    void setlevel(char l){
        level = l;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<<"[ "<<"Name : "<<this->name<<" ,";
        cout<<"Health : "<<this->health<<" ,";
        cout<<"Level : "<<this->level<<" ]";
        cout<<endl;
    }

    //user-defined copy constructor for deep  copy
    //Deep Copy : Copying data if all variables  by allocating simillar memory resources

    Deepcopy(Deepcopy& temp){
        cout<<"Copy Constructor created..."<<endl;
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
};


int main()
{
    //Shallow Copy

    Shallowcopy s1;
    s1.sethealth(10);
    s1.setlevel('B');
    char name[7] = "Tony";
    s1.setname(name);
    cout<<"Before changing data in main object..."<<endl;
    s1.print();
    Shallowcopy s2(s1);
    s2.print();

    cout<<endl;
    //Updating main object only 
    s1.name[0] = 'J';
    cout<<"After changing data in main object..."<<endl;
    s1.print();
    //the copy object also gets updates automatically
    s2.print();

    
    cout<<"Shallow Copy Enabled. Data updated in all instances !!"<<endl;
    cout<<endl;

    //Deep Copy

    Deepcopy d1;
    d1.sethealth(10);
    d1.setlevel('B');
    char nam[7] = "Tony";
    d1.setname(nam);
    cout<<"Before changing data in main object..."<<endl;
    d1.print();
    Deepcopy d2(d1);
    d2.print();

    cout<<endl;
    //Updating main object only 
    d1.name[0] = 'J';
    cout<<"After changing data in main object..."<<endl;
    d1.print();
    //the copy object doesn't update as it doesn't reference the same memory location.
    //Instead, copy object now gets simillar memory resources as in main object
    d2.print();

    
    cout<<"Deep Copy Enabled. Data is not updated in all instances !!"<<endl;

    return 0;
}