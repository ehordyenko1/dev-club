#include "FibonacciIterator.h"

        FibonacciIterator::FibonacciIterator(int fibonacci) : fibonacci(1), current(1), first(0), second(1), limit(fibonacci) {}

        void FibonacciIterator::next() {
            if ( over() ) {
                return;
            }
            fibonacci = first + second;

            first = second;

            second = fibonacci;

            current += 1;
        }

        void FibonacciIterator::operator++() { 
            next(); 
        }

        void FibonacciIterator::operator++(int) { 
            operator++(); 
        }

        bool FibonacciIterator::over() { 
            return current > limit; 
        }

        int FibonacciIterator::value() { 
            return fibonacci; 
        }

        int FibonacciIterator::operator*() { 
            return value(); 
        }