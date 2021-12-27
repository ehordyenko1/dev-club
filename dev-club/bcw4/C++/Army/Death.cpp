#include "Death.hpp"
#include "StateOfUnits.hpp"

Death::Death() {

}

Death::~Death() {

}

void Death::addBody(Unit* deceased) {
    cemetry.insert(deceased);
}

void Death::showDead() {
    std::set<Unit*>::iterator it;

        std::cout << "Deads : " << std::endl;
    for ( it = cemetry.begin(); it != cemetry.end(); it++ ) {
        std::cout << (*it)->state->getState() << std::endl;
    }
}

std::set <Unit*> Death::cemetry;