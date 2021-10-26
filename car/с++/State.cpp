#include "State.h"

	State::State(double engineSize, int numberOfWheels, const std::string& name) {
		this->engineSize = engineSize;
		this->numberOfWheels = numberOfWheels;
		this->name = name;
	}

	State::~State() {}

	double State::getEngineSize()const {
		return this->engineSize;
	}

	int State::getNubmerOfWheels()const {
		return this->numberOfWheels;
	}

	std::string State::getName()const {
		return this->name;
	}

	std::ostream& operator<<(std::ostream& out, const State& state) {
		out << "Name of transport : " << state.name << std::endl;
		out << "EngineSize : " << state.engineSize << std::endl;
		out << "NumberOfWheels : " << state.nubmerOfWheels << std::endl;
		return out;
	}