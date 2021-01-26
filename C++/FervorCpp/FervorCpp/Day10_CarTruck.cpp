#include <iostream>
#include "Day10_CarTruck.h"

using namespace std;

void Car::ShowCarState() {
	cout << "잔여 연료량: " << fuelGauge << endl;
}

void Truck::ShowTruckState() {
	ShowCarState();
	cout << "화물의 무게: " << freightWeight << endl;
}