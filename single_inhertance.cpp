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
    
};

int main()
{
   Car obj;
   obj.show();
    return 0;
}
