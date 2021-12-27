#include "GeometricIterator.h"

    GeometricIterator::GeometricIterator(int limit, int multiplier) : limit(limit), current(1), multiplier(multiplier) {}

            void GeometricIterator::next() {
                if ( over() ) {
                    return;
                }
                current *= multiplier;
            }

            void GeometricIterator::operator++() { 
                next(); 
            }

            void GeometricIterator::operator++(int) { 
                operator++(); 
            }

            bool GeometricIterator::over() { 
                return current > limit; 
            }

            int GeometricIterator::value() { 
                return current; 
            }

            int GeometricIterator::operator*() { 
                return value(); 
            }