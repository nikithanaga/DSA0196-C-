#include <iostream>
using namespace std;
int main() {
    string s="mom";
    string revstr;
    for(int i=s.length()-1;i>=0;i--)
    {
    	revstr+=s[i];
    }
	if(s==revstr)
	cout<<"palindrome";
	else
	cout<<"not palindrome";

}
