#include "StandartAttack.h"
	
	void StandartAttack::attack(Unit* caller, Unit* target){
		if (caller->getPower() == "Phy") {
			if ( caller->getState() == "Vampire") {
				PhyDamage damage(caller->getDamage());

				int dmg = damage.getPhyDamage();
			
				// text->text6();

				target->takeDamage(dmg);

				target->setHpZero();

				checkRogue(caller, target);

				if ( caller->getHP() > 0) {
				caller->addHpVamp(dmg/2);
				} else {
					return;
				}
				
				// text->text4(caller, target)
				
			} else {
				text->text1();
			}
		}
	}

	void StandartAttack::checkRogue(Unit* caller, Unit* target) {
		// int choice1;

		// text->text5();
		// text->text3();
		// std::cout << "Do u want to counter attack, " << target->getName() << " ?" << std::endl;
		// std::cout << "1.Yes      2.No" << std::endl;
		// text->text3();
		// text->text5();

		// std::cin >> choice1;

		// if ( choice1 == 1) {
			// text->text2(caller, target);
			if (caller->getState() == "Rogue") {
				text->text5();
				text->text3();
				std::cout << "You cant counter attack Rogue!!!" << std::endl;
				text->text3();
				text->text5();

				Sleep(3000);
				
				text->text5();
				text->text7();
				text->text5();
			} else if (caller->getState() != "Rogue") {
				target->counterAttack(caller);
				// text->text8(caller, target);
			} else {
			text->text5();
			text->text3();
			std::cout << "Well,you are weak" << std::endl;
			text->text3();
			text->text5();
		}
	}