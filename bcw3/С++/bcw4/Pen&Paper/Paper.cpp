#include "Pen.h"
#include "Paper.h"
#include <string>

using namespace std;

Paper::Paper(int maxSymbols) {
    this->maxSymbols = maxSymbols;
    this->symbols = 0;
    this->content = content;
}

Paper::~Paper() {}

int Paper::getMaxSymbols() const {
    return this->maxSymbols;
}
int Paper::getSymbols() const {
    return this->symbols;
}

void Paper::addContent(const std::string& message) {
    int size = message.size();
    int maxSymbToWrite = maxSymbols - symbols;  

    if ( this->symbols < this->maxSymbols ) {
        string newMessage = message.substr(0, maxSymbToWrite);
        this->symbols += size;
        this->content = content + newMessage;
    } else {
        throw OutOfSpace {};
    }
}

void Paper::show() const {
    cout << this->content << " " << endl; 
}







