#include <iostream>
#include "Day10_CarTruck.h"

using namespace std;

int main(void) {
	Car* pcar1 = new Truck(80, 200);
	Truck* ptruck1 = static_cast<Truck*>(pcar1);
	ptruck1->ShowTruckState();
	cout << endl;

	Car* pcar2 = new Car(120);
	Truck* ptruck2 = static_cast<Truck*>(pcar2);
	ptruck2->ShowTruckState();

	return 0;
}