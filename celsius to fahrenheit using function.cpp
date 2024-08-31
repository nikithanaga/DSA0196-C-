#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    double celsius = 25.0; 
    double fahrenheit = 77.0; 

    cout << celsius << "°C is " << celsiusToFahrenheit(celsius) << "°F" << endl;
    cout << fahrenheit << "°F is " << fahrenheitToCelsius(fahrenheit) << "°C" << endl;

    return 0;
}

