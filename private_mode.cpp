#include<iostream>

using namespace std;
// private visiblity mode

class A
{
   public:
   void show()
   {  cout<<"class A";}
};
class B : private A
{
    public:
   void call()
   {
       show();
   }
};


int main()
{
    B obj;
    obj.call();
    return 0;
}