#include <iostream>
using namespace std;
int main() {
    int a = 15; 
    int b = 25; 
    int c = 20; 
    int largest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    cout << "The largest number is: " << largest << endl;

}

