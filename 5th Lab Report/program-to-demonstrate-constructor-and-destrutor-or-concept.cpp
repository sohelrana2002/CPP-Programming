//program-to-demonstrate-constructor-and-destrutor-or-concept
#include <iostream>
using namespace std;

class Phone
{
private:
    string name;
    int quantity;

public:
    Phone()
    {
        cout << "Enter Phone name: ";
        getline(cin, name);
        cout << "Enter Phone Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Your Phone Name is: " << name << endl;
        cout << "Your Phone Quantity is: " << quantity << endl;
    }
    ~Phone()
    {
        cout << "Destructor successfully";
    }
};

int main()
{
    Phone obj1;
    obj1.display();
}