#include "WereWolfAttack.hpp"

   void WereWolfAttack::wereWolfAttack(Unit* caller, Unit* target) {
      int dmg = caller->state->getPhyDamage();

      target->state->takeHp(dmg);
      target->state->checkHpZero(target);
   }