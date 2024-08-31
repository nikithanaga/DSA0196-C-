#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int a[2][2]={{1,2},{1,2}};
	int b[2][2]={{1,2},{1,2}};
	int c[2][2]={0};
    for(i=0;i<2;i++)
    {
    	for(j=0;j<2;j++)
    	{
		c[i][j]=0;
    	    for(k=0;k<2;k++)
    		{
    			c[i][j]=a[i][k]*b[k][j];
    		}
    			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}

