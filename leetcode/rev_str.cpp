#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void reverse_word(string& word)
{
    int start = 0;
    int end = word.length() - 1;
    while (start < end)
    {
        swap(word[start], word[end]);
        start++;
        end--;
    }
}

string revString(string s)
{
    // reverse(s.begin(),s.end());

    string temp = "";
    string word = "";

    // Add a space at the end to trigger the reversal of the last word
    s += ' ';

    for (char c : s)
    {
        if (c == ' ')
        {
            reverse_word(word);
            temp += word;
            temp += ' '; // Add a space between words
            word = "";
        }
        else
        {
            word += c;
        }
    }

    return temp;
}

int main()
{
    string str;
    cout << "Enter the string : ";
    getline(cin, str);

    string reversed = revString(str);
    cout << "After Reversing : " << reversed << endl;

    return 0;
}
