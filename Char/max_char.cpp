#include<iostream>
using namespace std;

char getmaxchar(string s){

    int arr[26]={0};

    //converting all characters into numbers and counting frequency
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }

    //finding the maximum occuring character
    int max = -1;
    int major = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
            major = i;
        }
        
    }

    char c = major+'a';
    return c;
    
}

int main()
{
    // string s = {'output'};
    string s;
    cout<<"Enter string : ";
    cin>>s;

    char c=getmaxchar(s);
    cout<<"Maximum occuring character : "<<c<<endl;

    return 0;
    
}