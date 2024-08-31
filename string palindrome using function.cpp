#include<iostream>
using namespace std;
bool palindrome(string str)
{
	int start=0;
	int end=str.length()-1;
	while(start<end)
	{
		if(str[start]!=str[end])
		{
			return false;
		}
		start++;
		end--;
	}
	return true;
}
int main()
{
	string str="madam";
	if(palindrome(str))
	cout<<"palindrome";
	else
	cout<<"palindrome";
}
