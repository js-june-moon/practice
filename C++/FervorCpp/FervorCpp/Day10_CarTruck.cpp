#include <iostream>
#include "Day10_CarTruck.h"

using namespace std;

void Car::ShowCarState() {
	cout << "�ܿ� ���ᷮ: " << fuelGauge << endl;
}

void Truck::ShowTruckState() {
	ShowCarState();
	cout << "ȭ���� ����: " << freightWeight << endl;
}