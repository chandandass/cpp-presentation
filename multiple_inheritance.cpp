#include<iostream>

using namespace std;
class car 
{
    public:
    void normal_car()
    {
       cout<<"normal car";
    }
};
class Sportscar
{
public:
   void Sports_car()
   {
       cout<<"sports car"<<endl;
   }
};
class lexus : public car, public Sportscar
{
    public:
    void info()
    {
        normal_car();
        cout<<" + ";
        Sports_car();
    }

};
int main()
{
    lexus obj;
    obj.info();
    return 0;
}