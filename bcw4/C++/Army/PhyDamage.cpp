#include "PhyDamage.h"

    PhyDamage::PhyDamage(int damage) : phyDamage(damage), Damage(damage) {}

    int PhyDamage::getPhyDamage()  const{
        return this->phyDamage;
    }

    void PhyDamage::setDamage(int Damage) {
        this->phyDamage = Damage;
    }

