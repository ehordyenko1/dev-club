#ifndef DEMON_HPP
#define DEMON_HPP

#include "Soldier.hpp"

class Demon : public Soldier {
    Soldier* attackDe;
public:
    Demon(int magicDamage, int hp);
    ~Demon();
};

#endif //DEMON_HPP