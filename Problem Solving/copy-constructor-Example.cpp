// copy-constructor-Example

#include <iostream>
using namespace std;
class Example
{
    int a, b;

public:
    Example(int x, int y)
    {
        a = x;
        b = y;
        cout << "\nIm Constructor";
    }

    void Display()
    {
        cout << "\nValues :" << a << "\t" << b;
    }
};
int main()
{
    Example Obj1(10, 20);
    // Copy Constructor
    Example Obj2 = Obj1;

    // Constructor invoked.
    Obj1.Display();
    Obj2.Display();

    return 0;
}
