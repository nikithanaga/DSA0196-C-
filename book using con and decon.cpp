#include<iostream>
using namespace std;
class book
{
	public:
	book(string name,int year,int pages)
	{
		cout<<"book details:"<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"year:"<<year<<endl;
		cout<<"pages:"<<pages<<endl;
	}
	~book()
	{
		cout<<"successfully removed:"<<endl;
	}
};
int main()
{
	book b("its ends with us",1990,500);
	return 0;
}
