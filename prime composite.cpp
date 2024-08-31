#include<iostream>
using namespace std;
int main()
{
	int n=5,count=0;
	for(int i=2;i<n;i++)
	if(n%i==0)
	{
		count++;
	}
	if(count==0)
	cout<<"prime number";
	else
	cout<<"composite number";
	
}

