#include<iostream>
using namespace std;
int main()
{
	int n=1229,r,rev=0,temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(temp==rev)
	cout<<"palindrome";
	else
	cout<<"not palindrome";
}
