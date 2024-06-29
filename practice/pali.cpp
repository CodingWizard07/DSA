#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int n){
    //basecase
    if(i>n){
        return true;
    }

    //processing
    if(str[i] != str[n])
    return false;
    else
    return checkPalindrome(str,i+1,n-1); //rr

}
int main()
{
    string name="BooB";
    cout<<name<<endl;
    int n=name.length()-1;

    bool ans = checkPalindrome(name,0,n);

    if(ans){
        cout<<"Palindrome !!"<<endl;
    }
    else
        cout<<"Not Palindrome !!"<<endl;

}