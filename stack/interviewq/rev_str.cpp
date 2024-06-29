#include<iostream>
#include<stack>
using namespace std;

string reverse_using_stack(const string& str){
    stack<char> s;

    //store the input string in the stack
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }

    string ans;
    //pushing char by char in the ans string
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);

        s.pop();
    }
    
    return ans;
}

int main()
{
    
    string str="Goldd";
    string result = reverse_using_stack(str);
    cout<<"String before reversing - "<<str<<endl;
    cout<<"String after reversing  - "<<result<<endl;

    return 0;

    
}