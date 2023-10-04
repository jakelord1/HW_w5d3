#pragma once
#include <iostream>
#include <string>
using namespace std;
class Fuel {
	string fuel_type;
	double cost_l;
public:
	Fuel() = default;
	Fuel(string f, double c) { fuel_type = f; cost_l = c; }
	string GetF() { return fuel_type; }
	double GetC() { return cost_l; }
};
class Transport
{
protected:
	Fuel fuel;
	double cons_per_km;
	string trans_type;
public:
	Transport() = default;
	Transport(Fuel ft, string tt, double c);

	virtual void Show();
	virtual double Move();
	void AddFuel(int litr);
};

