#include<iostream>
using namespace std;

int main() {
    int n = 19, result = n, r;

    while(result != 1 && result != 4) {   
        int sum = 0;
        while(result > 0) {
            r = result % 10;
            sum =sum+r * r;
            result = result / 10;
        }
        result = sum;
    }

    if(result == 1)
    {
        cout << n << " is a Happy Number." << endl;
    }
    else  
    {
	    cout << n << " is not a Happy Number." << endl;
    }

    return 0;
}

