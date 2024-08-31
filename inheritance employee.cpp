#include<iostream>
using namespace std;
class employee
{
	public:
		string name;
		int id;
		int salary;
};
class engineer:public employee
{
	public:
	string speciality;
	int hours;
};
class manager:public employee
{
	public:
		string dept;
		int bonus;
		
};
int main()
{
	engineer e;
	e.name="nikitha";
	e.id=12;
	e.salary=1200000;
	e.speciality="web development";
	e.hours=6;
	
	cout<<"employee details:"<<endl;
	cout<<"name:"<<e.name<<endl;
	cout<<"id:"<<e.id<<endl;
	cout<<"salary:"<<e.salary<<endl;
	cout<<"speciality:"<<e.speciality<<endl;
	cout<<"hours:"<<e.hours<<endl;
	
	manager m;
	m.name="chetan";
	m.id=14;
	m.salary=130000;
	m.dept="it";
	m.bonus=12;
	
	cout<<"manager details:"<<endl;
	cout<<"name:"<<m.name<<endl;
	cout<<"id:"<<m.id<<endl;
	cout<<"salary:"<<m.salary<<endl;
	cout<<"dept:"<<m.dept<<endl;
	cout<<"bonus:"<<m.bonus<<endl;
	
	return 0;
	
	
	
}
