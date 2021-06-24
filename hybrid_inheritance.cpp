#include<iostream>
using namespace std;

class Car
{
    public:
 void show()
 {
     cout<<"car";
 }
};
class Maruti : public Car
{
 void info()
 {
     cout<<" i am a ";
     show();
     cout<<endl;
 }   
};

class Robot
{
    public:
    void AI()
    {
       cout<<"robot"<<endl;
    }
};


class Zoox : public Car , public Robot
{
  public:
  void info()
  {
      cout<<" i am a ";
      show();
      cout<<" and also a ";
      AI();
  }
};




int main()
{
    Zoox obj;
    obj.info();

    return 0;
}