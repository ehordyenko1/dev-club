#ifndef DATE_H
#define DATE_H

#include <iostream>

class InvalidDate {
    public:
        std::string text;
        InvalidDate(const std::string& text) : text(text) {}
};

class Date {
    private:
        int day;
        int month;
        int year;

        void validate(int day, int month, int year);
    public:
        Date(int day=30, int month=2, int year=1994);
        ~Date();

        int getDay() const;
        int getMonth() const;
        int getYear() const;
};

std::ostream& operator<<(std::ostream& out, const Date& date);

#endif //DATE_H