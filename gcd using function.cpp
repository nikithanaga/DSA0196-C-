#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{    
        int temp=b;
		b=a%b;
		a=temp;
		
		}
	return a;
	}
int main()
{
	int a=2,b=4;
	cout<<"gcd:"<<gcd(a,b);
	return 0;
	
}
