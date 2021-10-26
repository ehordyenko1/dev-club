#include "Transport.h"
#include <iostream>

class car: public Transport{
private:
	double engineSize;
	int numberOfWheels;
	std::string name;
public:
	car(double engineSize = 2.0, int numberOfWheels = 4,const std::string& name = "Car");
	~car();

	void drive()const;
};
