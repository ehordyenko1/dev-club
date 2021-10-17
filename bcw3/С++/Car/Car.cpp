#include <cmath>
#include "Point.h"
#include "Car.h"

Car::Car( double capacity, double consumption, const Point& location, const std::string& model ) {
    this->fuelAmount = capacity;
    this->fuelCapacity = capacity;
    this->fuelConsumption = consumption;
    this->location = location;
    this->model = model;
}

Car::~Car() {}

double Car::getFuelAmount() const {
    return this->fuelAmount;
}

double Car::getFuelCapacity() const {
    return this->fuelCapacity;
}

double Car::getFuelConsumption() const {
    return this->fuelConsumption;
}

const Point& Car::getLocation() const {
    return this->location;
}

const std::string& Car::getModel() const {
    return this->model;
}

void Car::drive(const Point& destination) {
    double fuelNeeded = this->location.distance(destination) * this->fuelConsumption;

        if ( this->fuelAmount < fuelNeeded ) {
            throw OutOfFuel();
        }

        this->fuelAmount -= fuelNeeded;
        this->location = destination;
}

void Car::drive(double x, double y) {
    this->drive(Point(x, y));
}

void Car::refill(double fuel) {
    if (fuel > this->fuelCapacity) {
        throw ToMuchFuel();
    }

    this->fuelAmount += fuel;
}

std::ostream& operator<<(std::ostream& out, const Car& car) {
    out << car.getModel() << "Fuel : " << car.getFuelAmount() << '/' << car.getFuelCapacity() << std::endl;
    out << car.getFuelConsumption() << " per mile" << std::endl;
    out << "Location : " << car.getLocation() << std::endl;
    return out;
}

