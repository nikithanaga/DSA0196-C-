#include<iostream>
using namespace std;

int main()
{
    int a = 2, b = 5, c = 4;

    if(a > b && a > c)
    {
        cout << "Largest is: " << a;
    }
    else if(b > a && b > c)
    {
        cout << "Largest is: " << b;
    }
    else
    {
        cout << "Largest is: " << c;
    }

    return 0;
}

