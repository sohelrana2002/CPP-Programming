//DEEP COPY CONCEPT
#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    int *quantity;

public:
    Car(string x, int y)
    {
        name = x;
        quantity = new int;
        *quantity = y;
    }
    void display()
    {
        cout << "Your Car Name is: " << name << endl;
        cout << "Your Car Quantity is: " << *quantity << endl;
    }

    void newCar(string n, int m)
    {
        name = n;
        quantity = new int;
        *quantity = m;
    }
    Car(Car &k)
    {
        name = k.name;
        quantity = new int;
        *quantity = *(k.quantity);
    }
};

int main()
{
    Car obj1("BMW", 30);
    obj1.display();
    Car obj2(obj1);
    cout << "2nd object " << endl;
    obj2.display();
    obj1.newCar("TOYOTA", 20);
    obj1.display();
}