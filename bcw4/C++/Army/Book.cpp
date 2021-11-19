// #include "Book.h"

// void showBook::printBook() {
//     std::cout << "1.Tornado\n2.Fireball\n3.Freez\n4.Decrease\n5.Weakening\n6.Blindness" << std::endl;
// }

// #include <iostream>

// enum Book {
//     Fireball,
//     Tornado
// };

// int main() {


#include <ctype.h>
#include <iostream>

bool foo (std::string word) {
    return word.find_first_not_of("abcdefghijklmnopqrstuvwxyz") == std::string::npos;
}

int main() {
    std::string str = "sdg dsg";

    if (foo(str)) {
       std::cout << str << std::endl;
    } else {
        std::cout << "its not a word" << std::endl;
    }
}