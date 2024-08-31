#include<iostream>
using namespace std;
int main()
{
	int n1=0,n2=1,temp=0,sum=0;
	cout<<n1<<endl;
	cout<<n2<<endl;
	for(int i=2;i<=5;i++)
	{
		temp=n1+n2;
		n1=n2;
		n2=temp;
		
	if(i%2==0)
	{
	  sum=sum+temp;
}
cout<<temp<<endl;
}
    cout<<"sum:"<<sum<<endl;
}
