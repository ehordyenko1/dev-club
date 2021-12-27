#ifndef OBSERVABLE_HPP
#define OBSERVABLE_HPP

#include "Observer.hpp"
#include <set>

class Observer;

class Observable {
protected:
    std::set <Observer*> observers;
public:
    void addObserver(Observer* observer);
    void removerObserver(Observer* observer);

    void notify();
};


#endif //OBSERVABLE_HPP