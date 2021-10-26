#include "Transport.h"
#include <iostream> 

class bike: public Transport{
private:
	double engineSize;
	int numberOfWheels;
	std::string name;
	public:
		bike(double engineSize = 2.1, int numberOfWheels = 2,const std::string& name = "Bike");
		~bike();

		void drive()const;
};