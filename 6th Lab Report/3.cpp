/*====write a c++ program that contains a class name FIRST there is member function set() to initialize a data member x and a friend function reverse(). now complete the program to find the reverse of the given value ====*/

#include <iostream>
using namespace std;

class FIRST
{
    int x, reversenumber = 0, reminder;

public:
    void set(int z)
    {
        x = z;
    }

    friend void Reverse(FIRST obj2);
};

void Reverse(FIRST obj2)
{
    while (obj2.x != 0)
    {
        obj2.reminder = obj2.x % 10;
        obj2.reversenumber = obj2.reversenumber * 10 + obj2.reminder;
        obj2.x = obj2.x / 10;
    }
    cout << "Reverse Number is: " << obj2.reversenumber << endl;
}

int main()
{
    int number;
    cout << "Enter your Number: ";
    cin >> number;
    FIRST obj1;
    obj1.set(number);
    Reverse(obj1);
}