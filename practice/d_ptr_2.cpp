#include<iostream>
using namespace std;
void update(int **p2){
    // case1
    p2 = p2 + 1;
    // case2
   // *p2 = *p2 + 1;
    // case3
   // **p2 = **p2 + 1;
}
int main()
{
    int i=5;
    int *p = &i;
    int **p2 = &p;

    cout<<"Before update -->"<<endl;
    cout<<i<<endl;
    cout<<p<<endl;
    cout<<p2<<endl;
update(p2);
    cout<<"After Update -->"<<endl;    
    cout<<i<<endl;    
    cout<<p<<endl;    
    cout<<p2<<endl;    

}