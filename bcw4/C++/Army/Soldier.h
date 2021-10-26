#ifndef SOLDIER_H
#define SOLDIER_H

#include "Unit.h"

class Soldier : public Unit {
private:
	int hpLimit;
	int hp;
	int dmg;
	std::string name;
public:
	Soldier(int hpLimit = 100, int dmg = 70, const std::string& name = "Soldier");
	~Soldier();

};

#endif //SOLDIER_H

class Car {
private:
	int speed;
	double size;
public:
	Car(double size, int speed) {
		this->speed = speed;
		this->size = size;
	}

	~Car()
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
}

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
}

class StateCars {
private:
	int speed;
	double size;
public:
	StateCars(double size, int speed) {
		this->speed = speed;
		this->size = size;
	}

	~Car()
};