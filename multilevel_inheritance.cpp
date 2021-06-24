#include <iostream>
using namespace std;
class Vehicle
{
public:
    void show()
    {
        cout << "vehicle.." << endl;
    }
};

class car : protected Vehicle
{
public:
    int gear;
    car() : gear(1) {}
};
class nano : private car
{
public:
    void Gear(int i = 1)
    {
        show();

        cout << "gear : " << ((i < 4) ? gear = i : gear) << endl;
    }
};
int main()
{
    nano obj;
    obj.Gear(2);
    obj.Gear(3);
    obj.Gear(5);

    return 0;
}