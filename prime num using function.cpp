#include<iostream>
using namespace std;
int prime(int n)
{
	int i,count=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			count=1;
		}
	}
    if(count==0)
	{
		cout<<"prime";
    }
    else
    {
    	cout<<"not prime";
	}
	return 0;
}
int main()
{
	int n=5;
	prime(n);
	return 0;
}
		
	
