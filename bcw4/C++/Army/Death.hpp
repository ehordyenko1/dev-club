#ifndef DEATH_HPP
#define DEATH_HPP

#include <list>
#include <iostream>

class StateOfUnits;
class Unit;

class Death {
protected:
    StateOfUnits* state;
    static std::list <Unit*> cemetry;
public:
    Death();
    ~Death();
    void addBody(Unit* deceased);
    static void showDead();
};

#endif //DEATH_HPP