#include <iostream>
#include "Day10_CarTruck.h"

using namespace std;

int main(void) {
	Car* pcar1 = new Truck(80, 200);
	Truck* ptruck1 = dynamic_cast<Truck*>(pcar1);

	Car* pcar2 = new Car(120);
	Truck* ptruck2 = dynamic_cast<Truck*>(pcar2);

	Truck* ptruck3 = new Truck(70, 150);
	Car* pcar3 = dynamic_cast<Car*>(ptruck3);
}