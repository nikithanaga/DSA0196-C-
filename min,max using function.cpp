#include<iostream>
using namespace std;
int min(int arr[],int size)
{
	int min=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int max(int arr[],int size)
{
	int max=arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[]={1,2,3,4};
	int size=4;
	cout<<"min:"<<(in)
}
