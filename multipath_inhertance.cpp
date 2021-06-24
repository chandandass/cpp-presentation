#include<iostream>
using namespace std;

class Vehicle
{
    public:
    void show()
    {
        cout<<"vehicle..."<<endl;
    }
};

class SportCar : public Vehicle
{
   public:
   void s_car()
   {
       cout<<"Sport car";
   }
};
class NormalCar : public Vehicle
{
   public:
   void n_car()
   {
       cout<<"Normal car";
   }
};

class Toyota : private SportCar , private NormalCar
{
  public:
  void info()
  {
      SportCar::show();
      cout<<"Toyota is a combination of ";
      s_car();
      cout<<" and ";
      n_car();
  }
};

int main()
{
    Toyota obj;
    obj.info();

    return 0; 

}