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
    void call()
    {
        cout<<"Car is a ";
        show();                              
    }
};
class Bus : private Vehicle
{    
   public:
   void call()
   {
       cout<<"Bus is a ";
       show();
   }
};

int main()
{
    Car nano;
    Bus volvo;
    nano.call();
    volvo.call();

    return 0;
}