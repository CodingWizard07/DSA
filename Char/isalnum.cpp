#include <iostream>
#include <string>
#include <cctype> // for isalnum function

using namespace std;

int calc_length(const string &s)
{
    return s.length();
}

// lowercase conversion
char to_lower(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch - 'A' + 'a';
    }
    return ch; // If it's not an uppercase character, return it as is
}

string remove(const string &s)
{
    string r;
    for (char ch : s)
    {
        if (isalnum(ch))
        {
            r += to_lower(ch);
        }
    }
    return r;
}

bool check_palindrome(const string s)
{
    string result = remove(s);

    int start = 0;
    int end = result.length() - 1;

    while (start <= end)
    {
        if (to_lower(result[start]) != to_lower(result[end]))
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}

int main()
{
    string name;
    cout << "Enter your name -> ";
    cin >> name;

    cout << "Name is -> " << name << endl;
    int len = calc_length(name);

    cout << "Length of the string --> " << len << endl;

    cout << "Before Conversion : " << name << endl;
    cout << "After Conversion : " << remove(name) << endl;

    if(check_palindrome(name)){
        cout<<name<<" is a palindrome "<<endl;
    }
    else{
        cout<<"The string is not a palindrome "<<endl;
    }
    return 0;
}
