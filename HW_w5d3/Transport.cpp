#include "Transport.h"

Transport::Transport(Fuel ft, string tt, double c)
{
	fuel = ft;
	trans_type = tt;
	cons_per_km = c;
}

void Transport::Show()
{
	cout <<"Transport type: " << trans_type << "\nFuel: " << fuel.GetF() << endl;
}

double Transport::Move()
{
	int r = 1+rand() % 1500;
	cout << "\nMoving...\n";
	cout << "You travel " << r << "km. You need " << cons_per_km * r << " litras of " << fuel.GetF() << " to travel.\n";
	return cons_per_km*r;
}

void Transport::AddFuel(int litr)
{
	cout << "\nAdding fuel...\n";
	cout << "Fuel cost: " << fuel.GetC()*litr << "$\n";
	cout << "U can ride: " << litr/cons_per_km << "km\n";
}


