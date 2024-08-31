#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float num=3.4;
	int floorvalue,ceilvalue;
	floorvalue=floor(num);
	ceilvalue=ceil(num);
	int neareastvalue=ceilvalue;
	cout<<"floor:"<<floorvalue<<endl;
	cout<<"ceil:"<<ceilvalue<<endl;
	cout<<"neareastvalue:"<<neareastvalue<<endl;
}
