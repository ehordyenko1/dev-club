#include "bike.h"

	bike::bike(double engineSize, int numberOfWheels,const std::string& name) {
		this->engineSize = engineSize;
		this->numberOfWheels = numberOfWheels;
		this->name = name;
	}

	bike::~bike() {}

	void bike::drive() const{
		std::cout << "2" << std::endl;
	}
