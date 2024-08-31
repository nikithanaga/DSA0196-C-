#include<iostream>
#include<string>
using namespace std;
class car
{
	public:
	string name;
	int speed;
	int seats;
};
int main()
{
	car ob1;
	ob1.name="tata";
	ob1.speed=1080;
	ob1.seats=4;
	cout<<"name:"<<ob1.name<<"\n"<<"speed:"<<ob1.speed<<"\n"<<"seats:"<<ob1.seats<<"\n";
	
	car ob2;
	ob2.name="bmw";
	ob2.speed=2080;
	ob2.seats=5;
	cout<<"name:"<<ob2.name<<"\n"<<"speed:"<<ob2.speed<<"\n"<<"seats:"<<ob2.seats<<"\n";
	
}
