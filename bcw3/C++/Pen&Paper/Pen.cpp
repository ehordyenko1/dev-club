#include "Pen.h"
#include "Paper.h"
#include <string>

using namespace std;

Pen::Pen(int inkCapacity) {
    this->inkCapacity = inkCapacity;
    this->inkAmount = inkCapacity;
}

Pen::~Pen() {}

int Pen::getInkAmount() const {
    return this->inkAmount;
}

int Pen::getInkCapacity() const {
    return this->inkCapacity;
}

void Pen::write(Paper& paper, const std::string& message) {
    int current_ink = getInkAmount();

    if (current_ink <= 0 ) {
        throw OutOfInk {};
    } else {
        int size = message.size();

        string newMessege = message.substr(0, current_ink);

        paper.addContent(newMessege);

        inkAmount -= size;
    }
}

void Pen::refill() {
    this->inkAmount = this->inkCapacity;
}
