#include <iostream>
using namespace std;
class A
{
private:
    int *x;

public:
    A(int p)
    {
        x = new int;
        *x = p;
    }
    A(A &obj)
    {

        x = new int;
        *x = *(obj.x);
    }
    void set(int m)
    {
        *x = m;
    }

    void show()
    {
        cout << *x << endl;
    }
};

int main()
{
    A ob(10);
    A ob1 = ob; // copy constructor
    ob.show();
    ob1.show();
    ob1.set(20);
    ob.show(); // 2nd time calling
    ob1.show();

    return 0;
}
