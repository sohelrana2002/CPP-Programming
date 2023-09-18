//CONSTRUCTOR OVERLOADING
#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    int quantity;

public:
    Car()
    {
        cout << "Enter Car name: ";
        getline(cin, name);
        cout << "Enter Car Quantity: ";
        cin >> quantity;
    }

    Car(string n, int m)
    {
        name = n;
        quantity = m;
    }

    void display()
    {
        cout << "Your Car Name is: " << name << endl;
        cout << "Your Car Quantity is: " << quantity << endl;
    }
};

int main()
{
    Car obj1;
    obj1.display();
    cout << "2nd object is overloading" << endl;
    Car obj2("Toyota", 10);
    obj2.display();
}