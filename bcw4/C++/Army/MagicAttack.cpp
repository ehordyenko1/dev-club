#include "MagicAttack.h"

        void MagicAttack::attack(Unit* caller, Unit* target) {
        if (caller->getPower() == "Mag") {
            text->text9();
			
			int choice;

			text->text6();

			text->text5();
			text->text3();
			std::cout << "choose the damage, which you want to attack :" << std::endl;
			std::cout << "1.PhyDamage            2.MagicDamage" << std::endl;
			text->text3();
			text->text5();

			std::cin >> choice;

			if ( choice == 1) {

				PhyDamage damage(caller->getDamage());

				int dmg = damage.getPhyDamage() / 4;

				target->takeDamage(dmg);

				text->text4(caller, target);

				checkRogue(caller, target);

				Sleep(6000);

				system("cls");
			} else if (choice == 2) {
				MagicDamage damage(caller->getDamage());

				int dmg = damage.getMagDamage();

				target->takeDamage(dmg);

				text->text4(caller, target);

				Sleep(4000);

				checkRogue(caller, target);

				Sleep(6000);

				system("cls");
			}
        } else {
            text->text1();
        }
	}


    
    
    
    void MagicAttack::checkRogue(Unit* caller, Unit* target) {
		int choice1;
		
		text->text5();
		text->text3();
		std::cout << "Do u wanna counter attack " << target->getName() << " ?" << std::endl;
		std::cout << "1.Yes      2.No" << std::endl;
		text->text3();
		text->text5();

		std::cin >> choice1;

		if ( choice1 == 1) {
			text->text2(caller, target);
			if (caller->getName() == "Rogue") {
				text->text5();
				text->text3();
				std::cout << "You cant counter attack Rogue!!!" << std::endl;
				text->text3();
				text->text5();

				Sleep(3000);
				
				text->text5();
				text->text7();
				text->text5();
			} else {
				target->counterAttack(caller);
				text->text8(caller, target);
			}
		} else {
			text->text5();
			text->text3();
			std::cout << "Well,you are weak" << std::endl;
			text->text3();
			text->text5();
		}
	}
	