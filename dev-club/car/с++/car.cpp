// #include "car.h"

// 	car::car(double engineSize, int numberOfWheels,const std::string& name) {
// 		this->engineSize = engineSize;
// 		this->numberOfWheels = numberOfWheels;
// 		this->name = name;
// 	}

// 	car::~car() {}

// 	void car::drive() const{
// 		std::cout << "1" << std::endl;
// 	}
#include <iostream>

using namespace std;

class Car {
private:
	int speed;
	double size;
public:
	Car(double size = 2.5, int speed = 180) {
		this->speed = speed;
		this->size = size;
	}

	int getSpeed() const{
		return this->speed;
	}

	double getSize() const{
		return this->size;
	}
};

class BMW : public Car{
private:
	int speed;
	double size;
public:
	BMW(double size, int speed) {
		this->speed = speed;
		this->size = size;
	}

	~BMW();
};

class Audi : public Car {
private:
	int speed;
	double size;
public:
	Audi(double size, int speed) {
		this->speed = speed;
		this->size = size;
	}

	~Audi();
};

class StateCars : public Car{
private:
	int speed;
	double size;
public:
	StateCars(int size, double speed) {
		this->speed = speed;
		this->size = size;
	}

	~StateCars();
};
	std::ostream& operator<<(std::ostream& out, const Audi& state) {
		out << "Speed " << state.getSpeed() << endl;
		out << "Size " << state.getSize() << endl;
		return out;
}


int main() {
	Car car;
	Audi audi(1.5, 220);

	cout << audi << endl;
}
