#include<iostream>
using namespace std;
int main()
{
	int x,y,a=6,b=8,gcd,lcm,temp=0;
	x=a;
	y=b;
	while(b!=0)
	{   temp=b;
		b=b%a;
		a=temp;
		
	}
	gcd=a;
	lcm=(x*y)/gcd;
	cout<<"gcd:"<<gcd<<endl;
	cout<<"lcm:"<<lcm;
}
