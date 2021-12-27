#ifndef ARITHMETICITERATOR_H
#define ARITHMETICITERATOR_H

class ArithmeticIterator {
private:
    int current;
    int limit;
    int multiplier;
public:
    ArithmeticIterator(int limit, int multiplier);

    void next();

    void operator++();

    void operator++(int);

    bool over();

    int value();

    int operator*();
};



#endif //ARITHMETICITERATOR_H
