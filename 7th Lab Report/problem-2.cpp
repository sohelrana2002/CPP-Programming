// problem name: write a c++ program to display "base class content" (using multi level inheritence)

#include <iostream>
using namespace std;

class A
{
protected:
    int x, y;

public:
    void display()
    {
        cout << "Enter 1st value: ";
        cin >> x;
        cout << "Enter 2nd value: ";
        cin >> y;
        int sum = x + y;
        cout << "Sum: " << sum;
    }
};

class B : public A
{
};

class C : public B
{
};

int main()
{
    C obj1;
    obj1.display();
}