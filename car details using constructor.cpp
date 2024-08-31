#include<iostream>
using namespace std;
class car
{
	public:
	car(string name,int seats,string model)
{
   cout<<"car details:"<<endl;
   cout<<"name:"<<name<<endl;
   cout<<"seats:"<<seats<<endl;
   cout<<"model:"<<model<<endl;
}
	
 ~car()
 {
 	cout<<"successfully destroyed"<<endl;
 }
};
int main()
{
	car c("toyota",4,"xuv");
	return 0;

}
