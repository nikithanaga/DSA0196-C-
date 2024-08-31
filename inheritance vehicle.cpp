#include<iostream>
using namespace std;
class vehicle
{    
    public:
	string make;
	string model;
	int year;
};
class car:public vehicle
{ 
  public:
  	int seats;
  	string fueltype;
	
};
class truck:public vehicle
	{
	public:
	int payload;	
	int towing;
			
};
int main()
{ 
	car c;
	c.make="toyota";
	c.model="corolla";
	c.year=2020;
	c.seats=5;
	c.fueltype="petrol" ;
	
	cout << "Car Details:" << endl;
    cout << "Make: " << c.make << endl;
    cout << "Model: " << c.model << endl;
    cout << "Year: " << c.year << endl;
    cout << "Seats: " << c.seats << endl;
    cout << "Fuel Type: " << c.fueltype << endl;

    truck t;
    t.make = "Ford";
    t.model = "F-150";
    t.year = 2018;
    t.payload = 3000;
    t.towing = 10000;

    cout << "Truck Details:" << endl;
    cout << "Make: " << t.make << endl;
    cout << "Model: " << t.model << endl;
    cout << "Year: " << t.year << endl;
    cout << "Payload Capacity: " << t.payload<< endl;
    cout << "Towing Capacity: " << t.towing<< endl;

    return 0;
	   
		
}
