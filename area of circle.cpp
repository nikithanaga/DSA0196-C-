#include <iostream>
using namespace std;

class Circle {
private:
    float radius;  // Private member variable to store the radius

public:
    // Function to set the radius
    void setRadius(float r) {
        radius = r;
    }
#include <iostream>
using namespace std;

class Circle {
private:
    float radius;  // Private member variable to store the radius

public:
    // Function to set the radius
    void setRadius(float r) {
        radius = r;
    }

    // Function to calculate and return the area
    float getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c;
    float r;

    cout << "Enter radius: ";
    cin >> r;

    c.setRadius(r);

    cout << "Area of the circle: " << c.getArea() << endl;

    return 0;
}

    // Function to calculate and return the area
    float getArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Circle c;
    float r;

    cout << "Enter radius: ";
    cin >> r;

    c.setRadius(r);

    cout << "Area of the circle: " << c.getArea() << endl;

    return 0;
}

