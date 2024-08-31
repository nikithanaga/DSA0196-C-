#include<iostream>
using namespace std;
int sum(int start,int end)
{
	int s=0;
	for(int i=start;i<=end;i++)
	{
		s=s+i*i;
	}
	return s;
}
int main()
{
	int start=10,end=20;
	int result=sum(start,end);
	cout<<"sum of squares start from 10 to end at 20 is:"<<result;
	return 0;
}
