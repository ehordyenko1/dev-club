#ifndef MAGICDAMAGE_H
#define MAGICDAMAGE_H

#include "Damage.h"

class MagicDamage : public Damage {
protected:
    int MagDamage;
public:
    MagicDamage(int damage);
    int getMagDamage() const;
    void setMagDamage(int damage);

};



#endif //MAGICDAMAGE_H