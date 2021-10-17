#include <iostream>
#include "List.h"
#include <cstdlib>

using namespace std;

List::List(int capacity, double multiplier) : capacity(capacity), current(0), multiplier(multiplier) {
       array = (int*)malloc(capacity*sizeof(int));

       if ( array == NULL ) {
           throw OutOfMemoryException();
       }
}

List::~List() {
   free(array);
}

int List::size() const {
    return this->current;
}

int List::max_size() const {
    return this->capacity; 
}

void List::erase(int index) {
    int len = size();

    for (int i = index; i < len; i++ ) {
        this->array[i] = this->array[i + 1];
        len -= 1;
    }
}

void List::insert(int value, int index) {
    if ( index <= this->capacity && index >= 0 ) {
        this->array[index] = value;
        current += 1;
    } else {
        throw OutOfMemoryException();
    } 
}

int List::find(int value) const {
    int len = size();

    for ( ; 0 <= len; len-- ) {
        if ( value == array[len] ) {
            return len;
        }
    }
    cout << "Value doesn't exist" << endl;
}

void List::push_back(int value) {
   int newCurrent = current + 1;

   if ( newCurrent > capacity ) {
       int newCapacity = capacity * multiplier;
       int* newArray = (int*)realloc(array, newCapacity*sizeof(int));

       if ( newArray == NULL ) {
           throw OutOfMemoryException();
       }

       capacity = newCapacity;
       array = newArray;
   }
   array[current] = value;
   current = newCurrent;
}  

int List::pop_back() {
   if ( current == 0 ) {
       throw ZeroLenException();
   }
   current -= 1;
   return array[current];
}

void List::sort() {
    int len = size();

    for ( int i = 1; i < len; i++ ) {
        int j = i;
        int temp = array[i];
        
        for ( int prev = j - 1; j > 0 && temp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = temp;
    }
}

int List::operator[](int index) const {
    int len = size();
    if ( index <= len && index >= 0 ) {
        return this->array[index];
    } else {
        cout << "wrong index" << endl;
    }
}

bool List::operator==(const List& other) const {
    int len = size();

    for ( int i = 0; i < len; i++) {
        return (this->array[i] == other.array[i]);
    }
}
            
bool List::operator!=(const List& other) const {
    int len = size();

    for ( int i = 0; i < len; i++) {
        return (this->array[i] != other.array[i]);
    }
}

std::ostream& operator<<(std::ostream& out, const List& list) {
   int last = list.size() - 1;

   for ( int i = 0; i < last; i++ ) {
       out << list[i] << ' ';
   }
   out << list[last];
   return out;
}