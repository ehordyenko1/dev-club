#ifndef FIBONACIITERATOR_H
#define FIBONACIITERATOR_H

class FibonacciIterator {
private:
    int fibonacci;
    int current;
    int first;
    int second;
    int limit;
public:
    FibonacciIterator(int fibonnacci);

    void next();

    void operator++();

    void operator++(int);

    bool over();

    int value();

    int operator*();
};

#endif //FIBONACIITERATOR_H