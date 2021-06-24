#include<iostream>
using namespace std;
//public visiblity mode
class A 
{
    public:
    void show()
    {
        cout<<"class a";
    }
};

class B : public A
{
   
};

int main()
{
     B obj;
     obj.show();
     return 0;
}

