#include "Bus.h"
#include <sstream>


Bus::Bus(const Bus& g)
{
    *this = g;
}

int Bus::getK() const
{
    return k;
}

Bus& Bus::operator=(const Bus& g)
{
    SetK(g.getK());
    SetA(g.getA());
    SetB(g.getB());
    SetC(g.getC());
    return *this;
}

Bus::operator string() const
{
    stringstream ss;

    ss << "Car: " << getCar() << " Number of seats: " << getK() << endl;
    return ss.str();
}

ostream& operator<<(ostream& out, const Bus& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, Bus& r)
{
    string a;
    int b, k;
    double c;
    Car g;
    cout << "Bus :\n ";
    cout << "Car :\n "; in >> a;
    cout << "Cylinders = "; in >> b;
    cout << "Power = "; in >> c;
    cout << "Number of seats = "; in >> k;
    cout << endl;
    g.SetA(a);
    g.SetB(b);
    g.SetC(c);
    r.SetCar(g);
    r.SetK(k);
    return in;
}
