#include <iostream>
using namespace std;

int length_str(char c[])
{
    int count = 0;
    for (int i = 0; c[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

void reverse(char c[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(c[s++], c[e--]);
    }
}

int main()
{
    char name[20];
    cout << "Enter your name -> ";
    cin >> name;

    cout << "Name is -> " << name << endl;
    int l = length_str(name);
    cout<< "Length of your name -> " << l << endl;
    reverse(name, l);
    cout<< "Reverse of string -> " << name << endl;

    return 0;
}