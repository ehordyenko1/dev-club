#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>



class Transport {
	private:
		double engineSize;
		int numberOfWheels;
		std::string name;
	public:
		Transport(double engineSize = 2.0, int numberOfWheels = 4, const std::string& name = "Merc");
		~Transport();

		double getEngineSize() const;
		int getNubmerOfWheels() const;
		std::string getName() const;

		void setEngineSize(double engineSize);
		void setNumberOfWheels(int numberOfWheels);
		void setName(std::string& name);

		virtual void drive() const;
};


#endif //TRANSPORT_H