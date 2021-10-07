#include <iostream>
#include "Complex.h"

Complex::Complex(double real, double imaginary) {
    this->real = real;
    this->imaginary = imaginary;
}

Complex::~Complex() {
    this->real = 0.0;
    this->imaginary = 0.0;
}

double Complex::getReal() const { 
     return this->real;
}

double Complex::getImaginary() const {
    return this->imaginary;
}

bool Complex::operator==(const Complex& other) const {
    return this->real == other.real && this->imaginary == other.imaginary;
}

bool Complex::operator!=(const Complex& other) const {
    return !(*this == other);
}

void Complex::operator+=(const Complex& other) {
    this->real += other.real;
    this->imaginary += other.imaginary;
}

void Complex::operator-=(const Complex& other) {
    this->real -= other.real;
    this->imaginary -= other.imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    Complex result = *this;
    result.imaginary + other.imaginary;
    result.real + other.real;
    
    return result;

}

Complex Complex::operator-(const Complex& other) const {
    Complex result = *this;
    result.imaginary -= other.imaginary;
    result.real -= other.real;
    
    return result;
}

Complex Complex::operator*(const Complex& other) const {
    Complex result = *this;
    result.imaginary *= other.imaginary;
    result.real *= other.real;
    
    return result;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex) {
    out << complex.getReal() << "+" << complex.getImaginary() << 'i';
    return out;
}