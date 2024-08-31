#include<iostream>
using namespace std;
string reverse(string str)
{
	int s=str.length();
	string rev;
	for(int i=s-1;i>=0;i--)
	{
		rev=rev+str[i];
	}
	return rev;
}
int main()
{
	string n="nikitha";
	string result=reverse(n);
	cout<<result;
}
