#ifndef _CAR_H__
#define _CAR_H__

class Car {
private:
	int fuelGauge;
public:
	Car(int fuel) : fuelGauge(fuel)
	{
	}
	void ShowCarState();
};

class Truck : public Car {
private:
	int freightWeight;
public:
	Truck(int fuel, int weight)
		: Car(fuel), freightWeight(weight)
	{}
	void ShowTruckState();
};

#endif