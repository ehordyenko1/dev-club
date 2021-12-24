#include "Observable.hpp"


void Observable::addObserver(Observer* observer) {
    observers.insert(observer);
}

void Observable::removerObserver(Observer* observer) {
    observers.erase(observer);
}


void Observable::notify() {
    std::set<Observer*>::iterator it;
    
    for ( it = observers.begin(); it != observers.end(); it++ ) {
        (*it)->getNotification(this);
    }
}