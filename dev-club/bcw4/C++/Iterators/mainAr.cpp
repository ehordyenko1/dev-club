#include <iostream>
// #include "ArithmeticIterator.h"
// #include "GeometricIterator.h"
// #include "FactorialIterator.h"
// #include "FibonacciIterator.h"
// #include "SimpleNumIterator.h"
// #include "ArrayIterator.cpp"
#include "FileIterator.cpp"

using namespace std;

int main() {
    // ArithmeticIterator seq(10, 2);
    // GeometricIterator seq1(10, 2);
    // FactorialIterator seq2(5);
    // FibonacciIterator seq3(6);
    // SimpleNumIterator seq4(15);
    // int array[] = {1, 2, 3, 4, 5, 6};
    // ArrayIterator<int> seq5(array, 6);
    FileIterator<char> seq6("SomeFile.txt");



    // for ( ; !seq.over(); seq++ ) {
    //     cout << *seq << " ";
    // }

    // cout << endl;

    // for ( ; !seq1.over(); seq1++ ) {
    //     cout << *seq1 << " ";
    // }

    // cout << endl;

    // for ( ; !seq2.over(); seq2++ ) {
    //     cout << *seq2 << " ";
    // }
    
    // cout << endl;

    // for ( ; !seq3.over(); seq3++ ) {
    //     cout << *seq3 << " ";
    // }

    // cout << endl;

    // for ( ; !seq4.over(); seq4++ ) {
    //     cout << *seq4 << " ";
    // }

    // for ( ; !seq5.over(); seq5++ ) {
    //      cout << *seq5 << " ";
    // }

    for ( ; !seq6.over(); seq6++ ) {
         cout << *seq6 << " ";
    }

    cout << endl;

    return 0;
}


