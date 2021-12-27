#include "Observer.hpp"

    void Observer::addObservables(Observable* observable) {
        observables.insert(observable);
        observable->addObserver(this);
    }

    void Observer::removeObservable(Observable* observable) {
        observables.erase(observable);
    }