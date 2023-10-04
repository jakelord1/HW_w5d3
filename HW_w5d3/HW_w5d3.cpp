#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;

class Car : public Transport 
{
    int num;
public:
    Car(Fuel ft, string tt, double c, int n) : Transport(ft, tt, c) {
        num = n;
    }
    void Show() {
        cout << "Car\nNumbers: " << num << endl;
        Transport::Show();
    }
};

class Ship : public Transport
{
public:
    Ship(Fuel ft, string tt, double c) : Transport(ft, tt, c) { };
    void Show() {
        cout << "Ship\n";
        Transport::Show();
    }
};

class Tram : public Transport
{
    string way;
public:
    Tram(Fuel ft, string tt, double c, string w) : Transport(ft, tt, c) {
        way = w;
    }
    void Show() {
        cout << "Tram\Way: " << way << endl;
        Transport::Show();
    }
    double Move() {
        cout << "Tram cant travel out of his way!\n";
        return 1;
    }
};

class MotorBike : public Transport
{
    int num;
public:
    MotorBike(Fuel ft, string tt, double c, int n) : Transport(ft, tt, c) {
        num = n;
    }
    void Show() {
        cout << "MotorBike\nNumbers: " << num << endl;
        Transport::Show();
    }
};

class Plane : public Transport
{
    string way;
public:
    Plane(Fuel ft, string tt, int c, string w) : Transport(ft, tt, c) {
        way = w;
    }
    void Show() {
        cout << "Plane\nWay: " << way << endl;
        Transport::Show();
    }
};

int main()
{
    srand(time(NULL));
    Fuel p("Petrol", 1);
    Fuel d("Dizel", 1.2);
    Fuel f("Plane fuel", 0.86);
    Fuel e("Electricity", 0);
    
    Transport* ptr = nullptr;
    int choose = 0;
    cin >> choose;
    switch (choose)
    {
    case 1 :{
        ptr = new Car(p, "earth", 0.086, 53252);
        ptr->Show();
        ptr->AddFuel(75);
        ptr->Move();
        break;
        }
    case 2: {
        ptr = new Ship(d, "water", 17);
        ptr->Show();
        ptr->AddFuel(2000);
        ptr->Move();
        break;
    }
    case 3: {
        ptr = new Tram(e, "earth", 0, "street1 - street2");
        ptr->Show();
        ptr->AddFuel(75);
        ptr->Move();
        break;
    }
    case 4: {
        ptr = new Plane(f, "air", 10, "Amsterdam - Paris");
        ptr->Show();
        ptr->AddFuel(75);
        ptr->Move();
        break;
    }
    case 5: {
        ptr = new MotorBike(p, "earth", 0.1, 53252);
        ptr->Show();
        ptr->AddFuel(75);
        ptr->Move();
        break;
    }
    default:
        break;
    }
    


}