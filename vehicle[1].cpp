#include <iostream>
#include <string>

using namespace std;
class Vehicle{
private:
	float mileage;
	float price;
	
public:
	Vehicle(){}


	Vehicle(float mileage,float price){
		this->mileage=mileage;
		this->price=price;
	}


	float getMileage(){
		return this->mileage;
	}
	float getPrice(){
		return this->price;
	}


	virtual void display(){
		cout<<"Mileage: "<<mileage<<"\n";
		cout<<"Price: "<<price<<"\n";
	}
};

class Car:public Vehicle{
private:
	float ownershipCost;
	int warranty;
	int seatingCapacity;
	string fuelType;
public:
	Car(){}
1

	Car(float mileage,float price,float ownershipCost,int warranty,int seatingCapacity,string fuelType):Vehicle(mileage,price){
		this->ownershipCost=ownershipCost;
		this->warranty=warranty;
		this->seatingCapacity=seatingCapacity;
		this->fuelType=fuelType;
	}


	float getOwnershipCost(){
		return this->ownershipCost;
	}
	int getWarranty(){
		return this->warranty;
	}
	int getSeatingCapacity(){
		return this->seatingCapacity;
	}
	string getFuelType(){
		return this->fuelType;
	}
	void display(){
		cout<<"Car\n";
		Vehicle::display();
		cout<<"Ownership Cost: "<<ownershipCost<<"\n";
		cout<<"Warranty: "<<warranty<<"\n";
		cout<<"Seating capacity: "<<seatingCapacity<<"\n";
		cout<<"Fuel type: "<<fuelType<<"\n";
	}
};

class Bike:public Vehicle{
	private:
	int numberCylinders;
	int numberGears;
	string coolingType;
public:
	Bike(){}
	Bike(float mileage,float price,int numberCylinders,int numberGears,string coolingType):Vehicle(mileage,price){
		this->numberCylinders=numberCylinders;
		this->numberGears=numberGears;
		this->coolingType=coolingType;
	}




	int getNumberCylinders(){
		return this->numberCylinders;
	}
	int getNumberGears(){
		return this->numberGears;
	}
	string getCoolingType(){
		return this->coolingType;
	}
	void display(){
		cout<<"Bike\n";
		Vehicle::display();
		cout<<"Number cylinders: "<<numberCylinders<<"\n";
		cout<<"Number gears: "<<numberGears<<"\n";
		cout<<"Cooling type: "<<coolingType<<"\n";
	}
};


int main()
{
	Car car(10000,36000,29000,10,3,"diesel");
    Bike bike(56000,52000,6,6,"liquid");
	car.display();
	cout<<"\n";
	bike.display();
	system("pause");
    return 0;
}
