#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include "Observable.hpp"
#include <set>

class Observable;

class Observer {
protected:
    std::set <Observable*> observables;
public:
    void addObservables(Observable* observable);
    void removeObservable(Observable* observable);

    virtual void getNotification(Observable* caller) = 0;
};

#endif //OBSERVER_HPP