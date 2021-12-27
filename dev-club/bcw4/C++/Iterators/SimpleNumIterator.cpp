#include "SimpleNumIterator.h"

    SimpleNumIterator::SimpleNumIterator(int SimpleNum) : limit(SimpleNum), current(1), changer(2), Next(current+1){}

            void SimpleNumIterator::next() {
                if ( over() ) {
                    return;
                }

                for ( int i = changer + 1; current < Next; i++ ) {
                    for ( int k = 2; k <= i ; k++) {
                        if ( i % k == 0 && k < i) {
                        i++;
                        k = 2;
                    } else if (i % k == 0 && k == i) {
                        changer = i;
                        current += 1;
                        break;
                    }
                }
            }
                Next += 1;
        }

            void SimpleNumIterator::operator++() { 
                next(); 
            }

            void SimpleNumIterator::operator++(int) { 
                operator++(); 
            }

            bool SimpleNumIterator::over() { 
                return current > limit; 
            }

            int SimpleNumIterator::value() { 
                return changer; 
            }

            int SimpleNumIterator::operator*() { 
                return value(); 
            }