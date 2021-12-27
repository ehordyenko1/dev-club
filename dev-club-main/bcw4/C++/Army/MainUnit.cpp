#include "AllFiles.hpp"

int main() {
    Vampire* vampire = new Vampire(70, 95);
    WereWolf* werewolf = new WereWolf(50, 100);
    Soldier* soldier = new Soldier(85, 100);
    Rogue* rogue = new Rogue(90, 105);
    Wizard* wizard = new Wizard(50, 100);
    Healer* healer = new Healer(50, 160);
    Berserker* berserker = new Berserker(80, 120);
    Priest* priest = new Priest(70, 120);
    Necromancer* necromancer = new Necromancer(60, 120);
    Warlock* warlock = new Warlock(60, 160);

    // necromancer->attack(healer);
    // necromancer->attack(wizard);
    // priest->attack(necromancer);
    // priest->attack(berserker);
    // soldier->attack(warlock);
    // necromancer->checkAttacked();
    // warlock->summon();
    // warlock->attack(berserker);
    // priest->arcaneBolt(rogue);

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