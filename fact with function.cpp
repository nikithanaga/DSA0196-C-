#include <iostream>
using namespace std;
int factorial(int n) 
{
    int fact = 1;
    for (int i = 1; i <= n; i++) 
	{
        fact =fact* i;
    }
    return fact;
}

int main() 
{
    int number = 4; 
    int result = factorial(number);

    cout<< result;

    return 0;
}

