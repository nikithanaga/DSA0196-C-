#include<iostream>
using namespace std;
class animal{
	public:
		void makesound()
		{
			cout<<"animal sound"<<endl;
		}
};
class dog:public animal
{
	public:
		void makesound()
		{
			cout<<"bark!"<<endl;
		}
};
int main()
{
	animal a;
	a.makesound();
	dog d;
	d.makesound();
	return 0;
}
