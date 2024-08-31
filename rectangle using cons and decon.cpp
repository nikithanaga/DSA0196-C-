#include<iostream>
using namespace std;
class rectangle
{
	public:
	rectangle(int length,int breadth)
	{
		cout<<"rectangle details to frind area:"<<endl;
		cout<<"length:"<<length<<endl;
		cout<<"breadth:"<<breadth<<endl;
		
	}
	~rectangle()
	
	{
		cout<<"successfully removed"<<endl;
	}
};
int main()
{
	rectangle r(12,2);
	return 0; 
}
