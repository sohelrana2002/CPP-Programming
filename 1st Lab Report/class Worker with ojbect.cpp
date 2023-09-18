// class Worker with ojbect
#include <iostream>
using namespace std;

class worker
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
    worker a, b;
    a.input();
    a.output();
    b.input();
    b.output();
}
