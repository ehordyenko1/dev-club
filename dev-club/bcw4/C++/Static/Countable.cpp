#include <iostream>

class Countable {
protected:
    static int copy;
    static int lastCopy;
public:
    Countable() {
        copy += 1;
        lastCopy += 1;
    }

    ~Countable() {
        copy -= 1;
        lastCopy -= 1;
    }

    int getLastCopy(){
        return lastCopy;
    }
};

int Countable::copy = 0;
int Countable::lastCopy = 0;

int main() {

Countable* first = new Countable();
Countable* second = new Countable();
Countable* third = new Countable();

std::cout << first->getLastCopy() << std::endl;

delete first;
delete second;
delete third;

}