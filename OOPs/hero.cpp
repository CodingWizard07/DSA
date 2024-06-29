#include<iostream>
#include<string.h>
using namespace std;

class Hero{

private:
    int health;
    char level;
public:
    
    char *name;
    Hero(){
        cout<<"Calling Simple constructor..."<<endl;
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

    //default copy constructor for shallow copy

    //user-defined copy constructor for deep  copy
    Hero(Hero& temp){
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
    Hero h;
    h.sethealth(20);
    h.setlevel('A');
    char name[6]="Krish";
    h.setname(name);
    h.print();

    //default copy constructor
    Hero m(h);
    m.print();

    h.name[0]='I';
    h.print();

    m.print();
    return 0;
}