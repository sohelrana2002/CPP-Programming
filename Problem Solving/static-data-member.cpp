#include <iostream>
using namespace std;
class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    static int objectCount;
    Box(double l, double b, double h)
    {
        cout << "Constructor called." << endl;
        length = l;
        breadth = b;
        height = h;
        objectCount++;
    }
    double Volume()
    {
        return length * breadth * height;
    }
};
int Box::objectCount = 0;

int main(void)
{
    Box Box1(3.3, 1.2, 1.5); // Declare box1
    cout << Box1.Volume() <<endl;
    Box Box2(8.5, 6.0, 2.0); // Declare box2
    cout << Box2.Volume() <<endl;
    Box Box3(2.5, 3.0, 5.0); // Declare box3
    cout << Box3.Volume() <<endl;
    cout << "Total objects: " << Box::objectCount << endl;

    return 0;
}
