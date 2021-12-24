#include "Death.hpp"
#include "StateOfUnits.hpp"

Death::Death() {

}

Death::~Death() {

}

void Death::addBody(Unit* deceased) {
    cemetry.push_back(deceased);
}

void Death::showDead() {
    std::list<Unit*>::iterator it;

        std::cout << "Deads : " << std::endl;
    for ( it = cemetry.begin(); it != cemetry.end(); it++ ) {
        std::cout << (*it)->state->getState() << std::endl;
    }
}

std::list <Unit*> Death::cemetry;