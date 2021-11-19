#include "AllFiles.h"

#include <iostream>

using namespace std;

int main() {
	Unit soldier("Soldier",100, 60, "Soldier", "Phy");
	Unit rogue("Rogue",250, 80, "Rogue", "Phy");
	Unit berserker("Berserk",280, 110, "Berserker", "Phy");
	SpellCaster necro("Necro", 80, 250, "Necro", "Mag");
	Unit vampire("Vampire", 80, 30, "Vampire", "Phy");
	Unit werewolf("Werewolf", 100, 80, "Werewolf", "Phy");

	vampire.attack(&soldier);

	cout << vampire << endl;
	cout << soldier << endl;
	cout << werewolf << endl;
}