#ifndef SIMPLENUMITERATOR_H
#define SIMPLENUMITERATOR_H

#include <cmath>

class SimpleNumIterator {
private:
    int current;
    int SimpleNum;
    int limit;
    int changer;
    int Next;
public:
    SimpleNumIterator(int SimpleNum);

    void next();

    void operator++();

    void operator++(int);

    bool over();

    int value();

    int operator*();
};

#endif //SIMPLENUMITERATOR_H
