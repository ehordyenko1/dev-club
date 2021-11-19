#ifndef FACTORIALITERATOR_H
#define FACTORIALITERATOR_H

#include <iostream>

class FactorialIterator {
private:
    int current;
    int factorial;
public:
    FactorialIterator(int factorial);

    void next();

    void operator++();

    void operator++(int);

    bool over();

    int value();

    int operator*();
};


#endif //FACTORIALITERATOR_H