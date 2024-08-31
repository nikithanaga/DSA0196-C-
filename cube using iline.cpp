#include <iostream>
using namespace std; 
inline int cube(int n) {
    return n * n * n;
}
int main() {
    int num = 3;
    int result = cube(num);
    cout << "The cube of " << num << " is: " << result << endl;
}

