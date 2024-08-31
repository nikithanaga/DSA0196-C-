#include<iostream>
using namespace std;
int main()
{
	int n=472,sum=0,r;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<sum;
}
