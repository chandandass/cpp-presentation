
#include<iostream>
using namespace std;

class A 
{
    public:
    void show()
    {
        cout<<"class A";
    }
};

class B : protected A
{

};
class C : public B
{
    public:
    void call()
    {
        show();
    }
};

int main()
{
    B b;
    C c;
   // b.show();
   c.call();
    return 0;
}