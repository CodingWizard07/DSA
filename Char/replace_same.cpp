#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

//using a new string 
string replace_str(string &str){
    string temp="";

	for(int i=0;i<str.length();i++){
		if(str[i] == ' '){
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');

		}
		else{
			temp.push_back(str[i]);
		}
	}
	return temp;
}

//without using a new str
// string replacestr(string &str){

// 	for(int i=0;i<str.length();i++){
// 		replace(str.begin(),str.end(),' ','@40');// not psssible
// 	}
// 	return str;
// }

int main()
{
    string s = "Hello World";

    cout<<"Using temp :";
    cout<<replace_str(s)<<endl;

    // cout<<"Without using temp : ";
    // cout<<replacestr(s)<<endl;
    return 0;
}