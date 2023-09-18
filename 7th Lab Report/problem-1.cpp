// write a program to fin a area and perimeter of a rectangle(using hierachical inheritence)

#include <iostream>
using namespace std;

class Rectangle
{
protected:
    float length, breadth;

public:
    void set()
    {
        cout << "Enter Length: ";
        cin >> length;
        cout << "Enter Breadth: ";
        cin >> breadth;
    }
};

class Area : public Rectangle
{
public:
    float calculate()
    {
        return length * breadth;
    }
};

class Perimeter : public Rectangle
{
public:
    float calculate()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    cout << "Find Area\n";
    Area obj1;
    obj1.set();
    cout << "Area: " << obj1.calculate();

    cout << "Find Perimeter\n";
    Perimeter obj2;
    obj2.set();
    cout << "\nPerimeter: " << obj2.calculate();
}