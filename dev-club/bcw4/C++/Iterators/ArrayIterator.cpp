#ifndef ARRAYITERATOR_H
#define ARRAYITERATOR_H

template <class T>
class ArrayIterator {
private:
    int currentI;
    T* array;
    int size;
public:
    ArrayIterator(T* arr, int size) : array(arr), currentI(0), size(size){}

    void next() {
        if(over()) {
            return;
        }
        currentI += 1;
    }

    bool over() {
        return array[currentI] == array[size];
    }

    void operator++() {
        next();
    }

    void operator++(int) {
        operator++();
    }

    T value() {
        return array[currentI];
    }

    int operator*() {
        return value();
    }
};

#endif //ARRAYITERATOR_H