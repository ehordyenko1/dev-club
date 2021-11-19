#include "MagicDamage.h"

    MagicDamage::MagicDamage(int damage) : MagDamage(damage), Damage(damage) {}

    int MagicDamage::getMagDamage() const{
        return this->MagDamage;
    }

    void MagicDamage::setMagDamage(int damage) {
        this->MagDamage = damage;
    }