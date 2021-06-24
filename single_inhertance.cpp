#include<iostream>
using namespace std;

class Vehicle
{
   public:
    void show()
    {
        cout<<"vehicle....."<<endl;
    }
};

class Car : public Vehicle
{
    public: 
    void info()
    { 
        cout<<"car is a ";
        show();
    }
};

int main()
{
   Car obj;
   obj.info();
    return 0;
}
