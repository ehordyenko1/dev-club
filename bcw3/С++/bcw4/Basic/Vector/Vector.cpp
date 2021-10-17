#include <iostream>
#include "Vector.h"
#include <cmath>

using namespace std;

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector::~Vector() {}

double Vector::getX() const {
    return this->x;
}

double Vector::getY() const {
    return this->y;
}

void Vector::setX(double value) {
    this->x = x;
}

void Vector::setY(double value) {
    this->y = y;
}

double Vector::len() const {
    return hypot(this->x, this->y);
}

bool Vector::operator==(const Vector& other) const {
    return this->x == other.x && this->y == other.y;
}

bool Vector::operator!=(const Vector& other) const{
    return !(*this == other);
}

void Vector::operator+=(const Vector& other) { 
    this->x += other.x;
    this->y += other.y;
}

void Vector::operator-=(const Vector& other) {
    this->x -= other.x;
    this->y -= other.y;
}

Vector Vector::operator+(const Vector& other) const {
    Vector result = *this;
    
    result.x += other.x;
    result.y += other.y;

    return result;
}

Vector Vector::operator-(const Vector& other) const {
    Vector result = *this;
    
    result.x -= other.x;
    result.y -= other.y;

    return result;
}

std::ostream& operator<<(std::ostream& out, const Vector& vector) {
    out << '(' << vector.getX() << ", " << vector.getY() << ')';
    return out;
}
