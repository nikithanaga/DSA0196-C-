#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a=23.4,b=45.7;
	float add,sub,mul,div,mod,rem;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=fmod(a,b);
	cout<<"add:"<<add<<endl;
	cout<<"sub:"<<sub<<endl;
	cout<<"mul:"<<mul<<endl;
	cout<<"div:"<<div<<endl;
	cout<<"mod:"<<rem<<endl;
}
