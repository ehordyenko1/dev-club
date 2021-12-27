#include "Transport.h"

	Transport::Transport(double engineSize, int numberOfWheels, const std::string& name) {
		this->engineSize = engineSize;
		this->numberOfWheels = numberOfWheels;
		this->name = name;
	}

	Transport::~Transport() {}

	double Transport::getEngineSize()const {
		return this->engineSize;
	}

	int Transport::getNubmerOfWheels()const {
		return this->numberOfWheels;
	}

	std::string Transport::getName()const {
		return this->name;
	}

	void Transport::setEngineSize(double engineSize) {
		this->engineSize = engineSize;
	}

	void Transport::setNumberOfWheels(int numberOfWheels) {
		this->numberOfWheels = numberOfWheels;
	}

	void Transport::setName(std::string& name) {
		this->name = name;
	}

	void Transport::drive()const {
		std::cout << "3" << std::endl;
	}






