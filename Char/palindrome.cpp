#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool ispalindrome(const string &a)
{
    int s = 0;
    int e = a.size() - 1;

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

string firstPalindrome(vector<string> &words)
{
    for (const string &word : words)
    {
        if (ispalindrome(word))
        {
            return word;
        }
    }
    return "";

}
int main()
{
    vector<string> words = {"abc", "car", "ada", "racecar", "cool"};

    string first_palindrome = firstPalindrome(words);
    if (!first_palindrome.empty()) {
        cout << "The first palindrome in the list is: " << first_palindrome << endl;
    } else {
        cout << "No palindrome found in the list." << endl;
    }

    return 0;
}