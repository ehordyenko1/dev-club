#include "Date.h"

void Date::validate(int day, int month, int year) {
    int daysINmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( year % 4 == 0 ) {
        daysINmonth[2] = 29;
    }

    if ( month < 1 || month > 12 ) {
        throw InvalidDate("INVALID MONTH!!!!");
    }

    if ( day < 1 || day > daysINmonth[month] ) {
        throw InvalidDate("INVALID DAY!!!!");
    }
}

Date::Date(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
    this->validate(day, month, year);
}

Date::~Date() {}

int Date::getDay() const {
    return this->day;
}

int Date::getMonth() const {
    return this->month;
}

int Date::getYear() const {
    return this->year;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << "DAY : " << date.getDay() << std::endl;
    out << "MONTH : " << date.getMonth() << std::endl;
    out << "YEAR : " << date.getYear() <<std::endl; 
}