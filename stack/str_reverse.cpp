#include<iostream>
#include<vector>
using namespace std;

//creating a stack class to deal with characters
class Stack{
private:
    vector<char> v;
public:
    //pushing function
    void push(char item){
        v.push_back(item);
    }

    //popping finction
    void pop(){
        if(!v.empty())
        {
            v.pop_back();
        }
        else{
            throw out_of_range("pop from empty stack");
        }
    }

    //finding the top element
    char top() const
    {
        if(!v.empty()){
            return v.back();
        }
        else{
            throw out_of_range("Top from empty stack");
        }
    }
    // Check if the stack is empty
    bool empty() const {
        return v.empty();
    }
};

string collect_char(const string& str)
{
    Stack s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans;

    //push element in string
    while(!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    return ans;
}

int main() {
    string input = "Fets Luck";
    string reversed = collect_char(input);
    
    cout << "Original string: " << input << endl;
    cout << "Reversed string: " << reversed << endl;
    
    return 0;
}