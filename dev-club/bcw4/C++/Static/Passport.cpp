#include <iostream>
#include <list>

class wrongNumber{};
class InvalidDate {
    public:
        std::string text;
        InvalidDate(const std::string& text) : text(text) {}
};

class Passport {
public:
    static int LastNumber;
    int number;
    int limit;
    static char letter1;
    static char letter2;
    char let1;
    char let2;
    std::string name;
    std::string surname;
    int day;
    int year;
    int month;
private:

void validate(int day, int month, int year) {
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
public:
    Passport(std::string Name, std::string Surname, int day, int month, int year) {
        validate(day, month, year);
        this->name = Name;
        this->surname = Surname;
        this->day = day;
        this->month = month;
        this->year = year;     
        
        limit = 1000000;
        LastNumber += 1;
        number = LastNumber;

        let1 = letter1;
        let2 = letter2;

        if ( LastNumber >= limit) {
            letter2 += 1;
            LastNumber = 100000;
        }

        if ( letter2 > 'Z') {
            letter1 += 1;
            letter2 = 'A';
        }
    }
    
    std::string getName() const{
        return name;
    }

    int getDay() const {
        return day;
    }

    std::string getSurname() const {
        return surname;
    }

    int getYear() const {
        return year;
    }

    int getMonth() const {
        return month;
    }

    static void createNewNum(int newNum) {
        if ( newNum >= 100000 && newNum <= 999999) {
            LastNumber = newNum;
            LastNumber -= 1;
       } else {
           throw wrongNumber();
       }
    }


    static void createNewSeries(char let1, char let2) {
        int choice;

        letter1 = let1;
        letter2 = let2;
        LastNumber = 99999;
    }
};

int Passport::LastNumber = 99999;
char Passport::letter1 = 'A';
char Passport::letter2 = 'A';

std::ostream& operator<<(std::ostream& out, Passport& pass) {
    std::cout << "Name : " << pass.getName() << std::endl;
    std::cout << "Surname : " << pass.getSurname() << std::endl;
    std::cout << "Date of birth : " << pass.getDay() << '.' << pass.getMonth() << '.' << pass.getYear() << std::endl;
    std::cout << "Series and Number of Passport : " << std::endl;
    std::cout << pass.number << pass.let1 << pass.let2 << std::endl;
}

int main() {
Passport pass = Passport("Egor", "Gordienko", 25, 7, 2004);
Passport::createNewSeries('B','B');
Passport::createNewNum(777777);

Passport pass1 = Passport("ASFDGAG", "ABABAGASD", 11, 2, 2000);

std::cout << pass << std::endl;
std::cout << pass1 << std::endl;


}