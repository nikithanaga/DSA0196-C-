#include<iostream>
using namespace std;
int main()
{
	int arr[]={0,6,3,4,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	int max=arr[0],min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		if(arr[i]<min)
		min=arr[i];
	}
	cout<<"max:"<<max;
	cout<<"min:"<<min;
}
