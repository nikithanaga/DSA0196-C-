#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5};
	int size=5;
	int element=10;
	int position=2;
	for(int i=size;i>position-1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[position-1]=element;
	size++;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
