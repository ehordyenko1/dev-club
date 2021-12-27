#include "Transport.h"
#include "bike.h"
#include "car.h"
#include "State.h"

using namespace std;

int main() {
	Transport transport(2.0, 4, "Walk");
	bike bike(2.1, 3, "Bike");
	car car(4.4, 4, "HUMMER");

	Transport* transport1[] = {&transport, &bike, &car};

	for(int i = 0; i < 3; i++ ) {
		transport1[i]->drive();
	} 

	cout << transport << endl;
	cout << bike << endl;
	cout << car << endl;

}