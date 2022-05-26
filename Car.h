#pragma once
#include <string>
#include <iostream>
using namespace std;

class Car {
private:
	string a;
	int b;
	double c;
public:
	Car();
	Car(string, int, double);
	Car(const Car&);

	void SetA(string);
	void SetB(int);
	void SetC(double);

	string getA() const { return a; }
	int getB() const { return b; }
	double getC() const { return c; }

	Car& operator = (const Car&);
	operator string() const;

	friend ostream& operator << (ostream&, const Car&);
	friend istream& operator >> (istream&, Car&);
};