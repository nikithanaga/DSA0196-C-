#include<iostream>
using namespace std;
int main()
{
	int a=12,b=14,x,y,gcd,lcm,temp=0;
	x=a;
	y=b;
	if(a<b)
	{
	  temp=a;
	  a=b;
	  b=temp;	
	}
	int remainder;
	do{
		remainder=a%b;
		a=b;
		b=remainder;
		
	}
	while(remainder!=0);
	gcd=a;
	lcm=(x*y)/gcd;
	cout<<"gcd:"<<gcd<<endl;
	cout<<"lcm:"<<lcm<<endl;
	
}
