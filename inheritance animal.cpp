#include<iostream>
using namespace std;
class animal
{
	public:
		string name;
		string species;
		int age;
		
};
class cat:public animal
{
	public:
		string color;
		string breed;
		
};
class dog:public animal
{
	public:
		int weight;
		string breed;
};
int main()
{
	dog d;
	d.name="fouzu";
	d.species="hybrid";
	d.age=19;
	d.weight=40;
	d.breed="golden";
	
	cout<<"dog details:"<<endl;
	cout<<"name:"<<d.name<<endl;
	cout<<"species:"<<d.species<<endl;
	cout<<"age:"<<d.age<<endl;
	cout<<"weight:"<<d.weight<<endl;
	cout<<"breed:"<<d.breed<<endl;
	
	cat c;
	c.name="siv";
	c.species="normal";
	c.age=19;
	c.color="white";
	c.breed="golden";
	
	cout<<"\ncat details:"<<endl;
	cout<<"name:"<<c.name<<endl;
	cout<<"species:"<<c.species<<endl;
	cout<<"age:"<<c.age<<endl;
	cout<<"color:"<<c.color<<endl;
	cout<<"breed:"<<c.breed<<endl;
	
	return 0;
	
}
