#include "Transport.h"

class State {
private:
	double engineSize;
	int numberOfWheels;
	std::string name;
public:
	State(double engineSize = 2.0, int numberOfWheels = 4,const std::string& name = "252");
	~State();

	double getEngineSize() const;
	int getNubmerOfWheels() const;
	std::string getName() const;

};
	std::ostream& operator<<(std::ostream& out, const State& state);

