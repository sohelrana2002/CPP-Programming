// copy-constructor-Example 2

#include <iostream>
using namespace std;
class cc
{
    int a;

public:
    cc(int x)
    {
        a = x;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }

    // copy constructor
    cc(cc &newObj)
    {
        a = newObj.a;
    }
};
int main()
{
    cc ob(100);
    cc ob1(ob);
    ob.show();
    ob1.show();
}
