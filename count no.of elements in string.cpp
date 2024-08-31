#include<iostream>
using namespace std;
int count(string str)
{   
    return str.length();
}
int main()
{
	string str="hello";
	int result=count(str);
	cout<<"no.of elements:"<<result;
	return 0;
}
