#include<iostream>
using namespace std;
class sNum
{ 
public:
	    int temp=0;
		sNum(int a,int b)
		{
		temp=a;
		a=b;
		b=temp;
		cout<<"a:"<<a<<endl;
		cout<<"b:"<<b<<endl;
	}
};
	int main()
	{
		int a=3,b=5;
		sNum obj(a,b);
	}
