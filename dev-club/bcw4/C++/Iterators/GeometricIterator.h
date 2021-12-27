#ifndef GEOMETRICITERATOR_H
#define GEOMETRICITERATOR_H

class GeometricIterator {
private:
    int current;
    int limit;
    int multiplier;
public:
    GeometricIterator(int limit, int multiplier);

    void next();

    void operator++();

    void operator++(int);

    bool over();

    int value();

    int operator*();
};



#endif //GEOMETRICITERATOR_H