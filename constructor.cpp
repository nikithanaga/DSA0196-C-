#include <iostream>
using namespace std;
class SumAvg {
private:
    int sum;
    float average;
public:
    SumAvg(int a, int b, int c) {
       
        sum = a+ b + c;
        average = sum / 3.0;
        cout<<"sum:"<<sum<<endl;
        cout<<"avg:"<<average<<endl;
    }
    
};
int main() {
    int a = 10, b = 20, c = 30;
    SumAvg obj(a, b, c);
}

