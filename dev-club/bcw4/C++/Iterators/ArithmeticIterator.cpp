#include "ArithmeticIterator.h"

    ArithmeticIterator::ArithmeticIterator(int limit, int multiplier) : limit(limit), current(1), multiplier(multiplier) {}

            void ArithmeticIterator::next() {
                if ( over() ) {
                    return;
                }
                current += multiplier;
            }

            void ArithmeticIterator::operator++() { 
                next(); 
            }

            void ArithmeticIterator::operator++(int) { 
                operator++(); 
            }

            bool ArithmeticIterator::over() { 
                return current > limit; 
            }

            int ArithmeticIterator::value() { 
                return current; 
            }

            int ArithmeticIterator::operator*() { 
                return value(); 
            }