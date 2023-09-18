//GET DATA FROM A EMPOYLEER USING CLASS
#include <iostream>
using namespace std;

class employee
{
private:
    string name;
    int age;
    int salary;

public:
    void input()
    {
        cout << "Enter your Name, Age, Salarry \n"
             << endl;
        cin >> name >> age >> salary;
    }
    void output()
    {
        cout << "output : " << endl;
        cout << "Your Name: " << name << endl;
        cout << "Your age: " << age << endl;
        cout << "Your salary: " << salary << endl;
    }
};

int main()
{
    employee a;
    a.input();
    a.output();
}
