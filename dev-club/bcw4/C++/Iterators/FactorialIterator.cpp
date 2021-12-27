#include "FactorialIterator.h"

    FactorialIterator::FactorialIterator(int factorial) : current(1), factorial(factorial){}

            void FactorialIterator::next() {
                if ( over() ) {
                    return;
                }
                current *= factorial;

                factorial--;
            }

            void FactorialIterator::operator++() { 
                next(); 
            }

            void FactorialIterator::operator++(int) { 
                operator++(); 
            }

            bool FactorialIterator::over() { 
                return factorial <= 0; 
            }

            int FactorialIterator::value() { 
                return current; 
            }

            int FactorialIterator::operator*() { 
                return value(); 
            }