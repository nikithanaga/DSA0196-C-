#include<iostream>
using namespace std;
int main()
{
	int n=1234,r,rev=0;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	cout<<"reverse of n is:"<<rev;
}
