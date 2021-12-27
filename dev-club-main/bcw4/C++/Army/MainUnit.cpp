#include "AllFiles.hpp"

int main() {
    Vampire vampire(70, 95);
    WereWolf werewolf(50, 100);
    Soldier soldier(85, 100);
    Rogue rogue(90, 105);
    Wizard wizard(50, 100);
    Healer healer(50, 160);
    Berserker berserker(80, 120);
    Priest priest(70, 120);
    Necromancer necromancer(60, 120);
    Warlock warlock(60, 160);

    // necromancer.attack(&berserker);
    // necromancer.attack(&berserker);
    // priest.attack(&berserker);
    // priest.attack(&berserker);
    // soldier.attack(&berserker);
    // necromancer.checkAttacked();
    // warlock.summon();
    // warlock.attack(&berserker);
    // priest.arcaneBolt(necromancer);

    std::cout << std::endl;

    std::cout << vampire << std::endl;
    std::cout << werewolf << std::endl;
    std::cout << soldier << std::endl;
    std::cout << rogue << std::endl;
    std::cout << wizard << std::endl;
    std::cout << healer << std::endl;
    std::cout << berserker << std::endl;
    std::cout << priest << std::endl;
    std::cout << necromancer << std::endl;
    std::cout << warlock << std::endl;

    std::cout << std::endl;

    Death::showDead();

    return 0;
}