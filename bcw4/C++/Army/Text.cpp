#include "Text.h"

// Text::Text() {
// 	this->show = new showBook();
// }

void Text::text1() {
		text5();
		std::cout << "---------------------------------------------------" << std::endl << std::endl;
		std::cout << "This type of damage doesn't exist, try to rewrite!" << std::endl << std::endl;;
		std::cout << "---------------------------------------------------" << std::endl;
		text5();
		return;
	}

	void Text::text2(Unit* caller, Unit* target) {
		text5();
		text5();
		std::cout << "---------------------------------------------------" << std::endl;
		std::cout << target->getName() << " is trying to counter attack -> " << caller->getName() << std::endl;
		std::cout << "---------------------------------------------------" << std::endl;
		text5();

		Sleep(3000);
	}

	void Text::text8(Unit* caller, Unit* target) {

		text5();
		text3();
		std::cout << target->getName() << " dealt : " << "["<< target->getDamage()<< "]" << " damage " << " to " << caller->getName() << " after counter attacking " << std::endl;
		text3();
		text5();

		Sleep(3000);

		text5();
		text7();
		text5();
	}

	void Text::text3() {
		std::cout << "-------------------------------------------------------" << std::endl;
	}

	void Text::text4(Unit* caller, Unit* target) {
		text5();
		std::cout << "-------------------------------------------------------" << std::endl;
		std::cout << caller->getName() << " is attacking " << target->getName() << " and HP of " << target->getName() << " : " << target->getHP() << "/" << target->getHpLimit() << std::endl;
		std::cout << "-------------------------------------------------------" << std::endl;
		text5();

		Sleep(2000);

	}
	
	void Text::text5() {
		std::cout << "\n" << "\n" << "\n" << "\n" << "\n" << std::endl;
	}

	void Text::text6() {
		int choice;
		text5();
		text3();
		std::cout << "Are you ready to attack?" << std::endl;
		std::cout << "1.Yes      2.No" << std::endl;
		text3();
		text5();

		std::cin >> choice;

		if ( choice == 1 ) {
			text5();
			text3();
			std::cout << "Let's gooooo!!!" << std::endl;
			text3();
			text5();
			Sleep(2000);
		} else if (choice == 2){
			text5();
			text3();
			std::cout << "Try later :(" << std::endl;
			text3();
			text5();
			Sleep(2000);

			system("cls");

			exit(0);
		}
	}

	void Text::text7() {
		text5();
		std::cout << "**THE FIGHTS IS OVER, WE ARE WAITING FOR YOU AGAIN**" << std::endl;
		return;
	}

	void Text::text9() {
		int choice;
		std::cout << "You have a book of spells,do you want to see that ?" << std::endl;
		std::cout << "1.Yes 2.No" << std::endl;
		
		std::cin >> choice;
	}

	// 	if ( choice == 1 ) {
	// 		std::cout << "ff" << std::endl;
	// 		this->show->printBook();
	// 	} else if ( choice == 2) {
	// 		std::cout << "Why did u cancel ? " << std::endl;
	// 	}
	// }
