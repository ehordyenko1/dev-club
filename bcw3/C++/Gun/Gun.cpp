#include "Gun.h"

Gun::Gun(const std::string& model, int capacity) {
    this->capacity = capacity;
    this->model = model;
    this->amount = 0;
    this->totalShots = 0;
    this->isReady = false;
}

Gun::~Gun() {}

int Gun::getAmount() const {
    return this->amount;
}

int Gun::getCapacity() const {
    return this->capacity;
}

bool Gun::ready() const {
    return this->isReady;
}

const std::string& Gun::getModel() const {
    return this->model;
}

int Gun::getTotalShots() const {
    return this->totalShots;
}

void Gun::prepare() {
    this->isReady = !this->isReady;
}

void Gun::reload() {
    if ( this->amount < this->capacity  ) {
        this->amount = this->capacity;
    }
}

void Gun::shoot() {
    if ( !ready() ) {
       throw NotReady();
   }
   if ( amount == 0 ) {
       throw OutOfRounds();
   }

    std::cout << "Bang!" << std::endl;

    this->amount -= 1;
    this->totalShots += 1;
}

std::ostream& operator<<(std::ostream& out, const Gun& gun) {
    out << "Model : " << gun.getModel() << std::endl;
    out << "Amount : " << gun.getAmount() << "/" << gun.getCapacity() << std::endl;
    out << "Total shots : " << gun.getTotalShots() << std::endl;
    return out;
}

