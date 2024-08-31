#include <iostream>
#include <string>
using namespace std;
class Animal {
protected:
    string name;
    string species;
    int age;
public:
    Animal(string n, string s, int a) : name(n), species(s), age(a) {}
       // Display method for Animal
    void display() const {
        cout << "Name: " << name << ", Species: " << species << ", Age: " << age << endl;
    }
};
class Cat : public Animal {
public:
    string color;
    string breed;
Cat(string n, string s, int a, string c, string b) : Animal(n, s, a), color(c), breed(b) {}

    // Display method for Cat
    void display() const {
        Animal::display();
        cout << "Color: " << color << ", Breed: " << breed << endl;
    }
};

class Dog : public Animal {
public:
    double weight;
    string breed;

    Dog(string n, string s, int a, double w, string b) 
        : Animal(n, s, a), weight(w), breed(b) {}

    // Display method for Dog
    void display() const {
        Animal::display();
        cout << "Weight: " << weight << ", Breed: " << breed << endl;
    }
};
int main() {
    Cat myCat("Whiskers", "Feline", 3, "Gray", "Siamese");
    Dog myDog("Rex", "Canine", 5, 25.5, "Labrador");

    myCat.display();
    myDog.display();

    return 0;
}
