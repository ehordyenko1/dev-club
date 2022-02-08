#include <iostream>
#include <fstream>
#include <stdlib.h>

template <typename T>
class FileIterator {
private:
    int capacity;
    T* array;
    int index;
    int maxIndex;
    double multiplier;
public:
    FileIterator(const char* filename) : capacity(10), index(0), maxIndex(0), multiplier(1.25) {
        array = (T*)malloc(capacity * sizeof(T));
        this->read(filename);
    }

    void next() {
        if(over()) {
            return;
        }
        index += 1;
    }

    void read(const char* filename) {
        std::ifstream in(filename);
        char symbol;

        for ( ; in.get(symbol); ) {
            array[index] = symbol;
            index += 1;
            maxIndex += 1;

            if (index == capacity) {
                int newCapacity = capacity * multiplier;
                T* newArray = (T*)realloc(array, newCapacity * sizeof(T));
                capacity = newCapacity;
                array = newArray;
            }
        }
        in.close();
        index = 0;
    }

    void operator++() {
        next();
    }

    void operator++(int) {
        operator++();
    }

    bool over() {
        return index == maxIndex;
    }

    T value() {
        return array[index];
    }

    T operator*() {
        return value();
    }
};
