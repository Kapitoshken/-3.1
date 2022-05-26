#pragma once
#include "Car.h"

class Bus:public Car{

	int k;
public:

	Bus(Car l=Car("",0 ,0), int h = 0) :Car(l), k(h) {};
	Bus(const Bus&);
	void SetCar(Car k) { *this = k; }
	void SetK(int j) { k = j; }

	Car getCar() const { return *this; }
	int getK() const;

	Bus& operator = (const Bus&);
	operator string() const;

	friend ostream& operator << (ostream&, const Bus&);
	friend istream& operator >> (istream&, Bus&);
};