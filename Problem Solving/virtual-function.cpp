#include <iostream>
using namespace std;
class Base
{
public:
    virtual void show()
    {
        cout << "Base class";
    }
};
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class" << endl;
    }
};
int main()
{
    Base *b, c; // Base class pointer
    Derived d;  // Derived class object
    b = &d;
    b->show();// Late Binding Occurs
    b = &c;    
    b->show(); // Late Binding Occurs
}
