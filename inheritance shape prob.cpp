#include<iostream>
#include<cmath>
using namespace std;
class Shape
{
	public:
		int height;
		int width;
};
class Triangle:public Shape
{
	public:
		double area()
		{
			return 0.5*height*width;
		}
		double perimeter()
		{
			double hypotensue=sqrt(height*height+width*width);
			return hypotensue;
		}
};
class Rectangle:public Shape
{
	public:
 		int perimeter()
		{
			return 2*(height+width);
		}
		int area()
		{
			return height*width;
		}
};
int main()
{
	Triangle t;
	Rectangle r;
	t.height=2;
	t.width=8;
	r.height=2;
	r.width=2;
	cout<<"area of triangle:"<<t.area()<<endl;
	cout<<"perimeter of triangle:"<<t.perimeter()<<endl;
	cout<<"area of rectangle:"<<r.area()<<endl;
	cout<<"perimeter of rectangle:"<<r.perimeter()<<endl;
	
}
