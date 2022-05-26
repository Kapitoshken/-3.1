#include "Car.h"
#include <sstream>

Car::Car()
{
    a = "";
    b = 0;
    c = 0;
}

Car::Car(string f, int g, double h)
{
    a = f;
    b = g;
    c = h;
}

Car::Car(const Car& g)
{
    a = g.a;
    b = g.b;
    c = g.c;
}

void Car::SetA(string a1)
{
    a = a1;
}

void Car::SetB(int k1)
{
    b = k1;
}

void Car::SetC(double l1)
{
    c = l1;
}

Car& Car::operator=(const Car& g)
{
    a = g.a;
    b = g.b;
    c = g.c;
    return *this;
}

Car::operator string() const
{
    stringstream ss;
    ss << "\nName: " << a << " \tNumber: " << b << "\tPower: " << c << endl;
    return ss.str();
}

ostream& operator<<(ostream& out, const Car& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, Car& r)
{
    cout << "Car = "; in >> r.a;
    cout << "Cylinders = "; in >> r.b;
    cout << "Power = "; in >> r.c;
    cout << endl;
    return in;
}