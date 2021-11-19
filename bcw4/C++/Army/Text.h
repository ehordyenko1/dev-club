#ifndef TEXT_H
#define	TEXT_H

#include "Unit.h"
#include "windows.h"

class Unit;
class showSpells;

class Text {
public:
	// Text();
	void text1();
	void text2(Unit* caller, Unit* target);
	void text3();
	void text4(Unit* caller, Unit* target);
	void text5();
	void text6();
	void text7();
	void text8(Unit* caller, Unit* target);
	void text9();
};

#endif //TEXT_H