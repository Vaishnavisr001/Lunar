#include<iostream>
using namespace std;
class Vehicle {
protected:
	float price;
public:
	Vehicle(float p) {
		price = p;

	}
	void Showprice() {
		cout << "price:" << price << endl;

	}
};
class Car : public Vehicle {
protected:
	int seatingCapacity;
	int numberOfDoor;
	string type;
public:
	
	void setCarDetails(int s, int d, string t) {
		seatingCapacity = s;
		numberOfDoor = d;
		type = t;
	}
	void showCarDetails() {
		cout << "Seating capacity:" << seatingCapacity<<endl;
		cout << "Number of Doors:" << numberOfDoor << endl;
		cout << "Fuel type:" << type << endl;

	}
};
class MotorVehicle :public Vehicle {
protected:
	int numberofCylinder;
	int numberofGears;
	int numberofWheels;
public:
	void setMotorVehicleDetails(int c, int g, int w) {
		numberofCylinder = c;
		numberofGears = g;
		numberofWheels = w;
	}
	void showMotorDetails() {
		cout << "Number of cylinder:" << numberofCylinder << endl;
		cout << "Number of Gears:" << numberofGears << endl;
		cout << "Number of wheels:" << numberofWheels << endl;
	}
};
class Audi :public Car {
protected:
	string typeModel;
	void setAudiDetails(float p, int seat, int door, string fuel, string model) {
		typeModel = model;
	}
		
};

	