#ifndef PHYDAMAGE_H
#define PHYDAMAGE_H

#include "Damage.h"

class PhyDamage : public Damage{
protected:
    int phyDamage;
public:
    PhyDamage(int damage);
    int getPhyDamage() const;
    void setDamage(int damage);
};



#endif //PHYDAMAGE_H