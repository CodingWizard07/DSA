#include <iostream>
using namespace std;

int calc_length(char c[])
{
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

//lowercase conversion
char to_lower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

//Not case sensitive
bool check_palindrome_NCS(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (to_lower(a[s]) != to_lower(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}


//case sensitive
bool check_palindrome_CS(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}



int main()
{
    char name[20];
    cout << "Enter your name -> ";
    cin >> name;

    cout << "Name is -> " << name << endl;
    int len = calc_length(name);

    cout << "Length of the string --> " << len << endl;

    // if(check_palindrome_CS(name,len)){
    //     cout<<name<<" is a palindrome "<<endl;
    // }
    // else{
    //     cout<<"The string is not a palindrome "<<endl;
    // }
    if(check_palindrome_NCS(name,len)){
        cout<<name<<" is a palindrome "<<endl;
    }
    else{
        cout<<"The string is not a palindrome "<<endl;
    }

    return 0;
}