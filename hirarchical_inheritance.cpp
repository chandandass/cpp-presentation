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

class Car : private Vehicle
{   
    public:
    void info()
    {
        cout<<"Car is a ";
        show();                              
    }
};
class Bus : private Vehicle
{    
   public:
   void info()
   {
       cout<<"Bus is a ";
       show();
   }
};

int main()
{
    Car nano;
    Bus volvo;
    nano.info();
    volvo.info();

    return 0;
}